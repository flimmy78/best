/*! @file dll_lib.h
<PRE>
********************************************************************************
模块名       :
文件名       :  dll_lib.h
文件实现功能 :  服务管理器，一个插件可能有多个服务
作者         :  LiJin
版本         :  V1.00
--------------------------------------------------------------------------------
备注         :  <其它说明>
--------------------------------------------------------------------------------
修改记录 :
日 期        版本     修改人              修改内容

********************************************************************************
</PRE>
*  @brief   服务管理器
*  @author  LiJin
*  @version 1.0
*  @date    2017.03.24
*******************************************************************************/

#include "dll_lib.h" 
 

#include <QDebug>

CAppMain::CAppMain()
{

}

CAppMain::~CAppMain()
{
	m_arrServices.clear();
}

/** @}*/
