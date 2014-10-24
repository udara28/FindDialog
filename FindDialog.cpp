#include <QtGui>
#include "FindDialog.h"

findDialog::findDialog(QWidget *parent) : QDialog(parent)
{	
	line = new QLineEdit();
	find = new QPushButton(tr("&Find"));
	close = new QPushButton(tr("&Close"));
	matchCase = new QCheckBox(tr("&Match Case"));
	findNext = new QCheckBox(tr("Find &Next"));
	lbl = new QLabel(tr("Find &what"));

	QHBoxLayout *box = new QHBoxLayout();
	box->addWidget(line);
	box->addWidget(lbl);
	box->addWidget(find);
	box->addWidget(close);
	box->addWidget(matchCase);
	setLayout(box);

	find->setDefault(true);
	find->setEnabled(false);	

	connect(line,SIGNAL(textChanged(const QString &)),this,
SLOT(findEnabled(const QString &)));

	connect(close,SIGNAL(clicked()),this,SLOT(close()));

	connect(find,SIGNAL(clicked()),this,SLOT(findClicked()));
}

void findDialog::findEnabled(const QString &text)
{
	find->setEnabled(!text.isEmpty());
}

void findDialog::findClicked()
{
	emit findNextMatch();
}
