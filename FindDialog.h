#ifndef FIND_DIALOG_H
#define FIND_DIALOG_H

#include <QDialog>

class QLineEdit;
class QCheckBox;
class QPushButton;
class QLabel;

class findDialog : public QDialog
{
	Q_OBJECT

public:
	findDialog(QWidget *parent=0);

signals:
	void findNextMatch();
	
private slots:
	void findClicked();	
	void findEnabled(const QString &text);
	
private:
	QLineEdit *line;
	QLabel *lbl;
	QPushButton *find;
	QPushButton *close;
	QCheckBox *matchCase;
	QCheckBox *findNext;		
}; 

#endif
