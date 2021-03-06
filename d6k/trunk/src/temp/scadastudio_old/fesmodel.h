#ifndef CFESMODEL_H
#define CFESMODEL_H

#include <QObject>

class CTreeWidget;
class QStandardItemModel;
class CQuoteItem;
class QMenu;
class QAction;
class QModelIndex;
class CScadastudio;
class CTabWidget;

class CFesModel:public QObject
{
	Q_OBJECT
public:
	CFesModel(CScadastudio *pUi, CQuoteItem *item);
	~CFesModel(void);

private:
	void Init();

	void CreateOneLevelNode();

	QAction *AddChannelAction(QMenu *pMenu);

	QAction *AddChannelGroupAction(QMenu *pMenu);

	void AddChannel(QModelIndex &index, int nType);

	void AddChannelGroup(QModelIndex &index, int nType);

	void AddChannelDialog(QString strChannelName, QString strGroup);

	void GetGroup(QModelIndex &index, QString &strGroup);

	//����װ��
	void AddDevice(QModelIndex &index, int nType);
		
	QAction *AddDeviceAction(QMenu *pMenu);

	QAction *AddAction(QMenu *pMenu, QString strName, QString strIcon);

private slots:
	void GetFesType(int nType, QModelIndex &indexSelect, int nMouseClickType);

	void test()
	{

	}

private:
	QStandardItemModel *m_pModel;

	CTreeWidget *m_pTree;

	CQuoteItem *m_pTopFesItem;

	CQuoteItem *m_pTopProjectItem;

	CScadastudio *m_pUI;

	CTabWidget *m_pTabWidget;

	CScadastudio *m_pUi;
};

#endif // CFESMODE_H