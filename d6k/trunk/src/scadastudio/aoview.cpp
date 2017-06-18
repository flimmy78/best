#include "aoview.h"
#include "aotable.h"
#include "config_data.h"

CAOView::CAOView(QWidget *parent, IMainModuleInterface *pCore, Config::CDevice *pDeviceData, QString &strTag,
	CQuoteItem *pItem, CChannel *pModule, Config::CFesData *pFes)
	: QMainWindow(parent)
{
	Q_UNUSED(strTag);
	
	Q_ASSERT(pCore);
	Q_ASSERT(pDeviceData);
	Q_ASSERT(pItem);
	Q_ASSERT(pModule);

	if (!pCore)
	{
		return;
	}

	if (!pDeviceData)
	{
		return;
	}

	if (!pItem)
	{
		return;
	}

	if (!pModule)
	{
		return;
	}

	m_pTable = new CAOTable(this, pDeviceData->m_arrAOs, pCore, pModule, pFes);

	setCentralWidget(m_pTable);
}

CAOView::~CAOView()
{

}

void CAOView::Delete()
{
	m_pTable->setModel(nullptr);
}