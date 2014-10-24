#include <QApplication>
#include "FindDialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc,argv);
	findDialog *f_dialog = new findDialog();
	f_dialog->show();
	return app.exec();

}
