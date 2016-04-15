#ifndef WTLIB_H
#define WTLIB_H
#include <QTextCodec>
#include<QBuffer>
#include<QDataStream>
#include <QFile>
#include <QDateTime>
#include "WtLib_global.h"

#ifdef WIN32
WTAPI int  WimDev_SetCom(char *comNo, int  bps);
WTAPI int  WimDev_Init(int IniType);
WTAPI int  WimDev_Test(char * bStatus);
WTAPI int  WimDev_Synchro(void);
WTAPI int  WimDev_ClearOne (void);
WTAPI int  WimDev_GetCount(void);
WTAPI int  WimDev_Data(int VehicleID,long *Weight,long *WtLimit,int AxisType[10],double *speed);
WTAPI int  WimDev_AxisCount(int VehicleID);
WTAPI int  WimDev_AxisData(int VehicleID, int AxisID,int *AxisType, long TyreWeight[4]);
WTAPI int  WimDev_AxisInfo(int VehicleID,long AxisWeight [10],double *speed);
WTAPI int  WimDev_AxisCount1(int VehicleID);
WTAPI int  WimDev_AxisData1(int VehicleID, int AxisID,int *AxisSpeed, int *Weight);
WTAPI int  WimDev_ClearOneData (int VehicleID);
#else
WTAPI int WimDev_SetCom(char *comNo, int  bps);
WTAPI int WimDev_Init(int IniType);
WTAPI int WimDev_Test(char * bStatus);
WTAPI int WimDev_Synchro(void);
WTAPI int WimDev_ClearOne (void);
WTAPI int WimDev_GetCount(void);
WTAPI int WimDev_Data(int VehicleID,long *Weight,long *WtLimit,int AxisType[10],double *speed);
WTAPI int WimDev_AxisCount(int VehicleID);
WTAPI int WimDev_AxisData(int VehicleID, int AxisID,int *AxisType, long TyreWeight[4]);
WTAPI int WimDev_AxisInfo(int VehicleID,long AxisWeight [10],double *speed);
WTAPI int WimDev_AxisCount1(int VehicleID);
WTAPI int WimDev_AxisData1(int VehicleID, int AxisID,int *AxisSpeed, int *Weight);
WTAPI int WimDev_ClearOneData (int VehicleID);
#endif
#endif // WTLIB_H
