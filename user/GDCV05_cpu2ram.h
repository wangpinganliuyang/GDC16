/*
 * GDCV05_cpu2ram.h
 *
 *  Created on: 2017��12��7��
 *      Author: wangpingan
 */

#ifndef USER_GDCV05_CPU2RAM_H_
#define USER_GDCV05_CPU2RAM_H_

typedef struct {
	bool ReadySwithOn:1; //1:��׼���ý�ͨ��Դ
	bool SwithedOn:1; //1����Դ�ѽ�ͨ
	bool OperationEnabl:1; //1:����ʹ��
	bool Fault:1; //1:����
	bool VoltageEnabl:1;//1���ߵ�Դʹ��
	bool QuickStop:1;//0:���ڼ�ͣ״̬��1����֧�ּ�ͣ��ͣ����û������
	bool SwitchOnDisabl:1;//0:���ڲ��ɽ�ͨ��Դ״̬��
	bool Warning:1;//1:����������
	bool res0:1;//Ԥ��
	bool Remote:1;  //0:��Զ��ģʽ   1��Զ��ģʽ  EtherCATΪԶ��ģʽ
	bool TargetReached:1;   //1:�ﵽĿ��ָ��
	bool InternalLimitActive:1;  //1:�����ڲ����ƶ����ܴﵽĿ��ָ��ֵ
	bool res1:4;  //Ԥ��
}STATUSWORD_BITS;

typedef union {
	STATUSWORD_BITS bits;
	UINT16 all;
}STATUSWORD;

typedef struct {
	STATUSWORD StatusWord;//״̬��
	UINT32 ModesOfOperationDisplay;//0x6061���ŷ���ʾ������ģʽ��1��Profile λ�ÿ���ģʽ��2���ٶȿ���ģʽ 3��Profile �ٶȿ���ģʽ 4��Profileת�ؿ���ģʽ  6��ԭ��ع�λ�ÿ���ģʽ 7������λ�ÿ���ģʽ  8��ͬ������λ��ģʽ 9��ͬ�������ٶ�ģʽ 10��ͬ������ת��ģʽ
	INT32 PositionActualValue;//��������ʵ��λ��
	INT32 VelocityActualValue;//�����綯����ǰʵ��ת��
	UINT32 GDCIndex;//GDC��������ͷbit31/bit30 0 ���ģ�1����2д
	UINT32 GDCIndexValue;//GDC��������ֵ
}GDC_R,*pGDC_R;
extern GDC_R  GDCV05_CPU2_R;

typedef struct {
	bool SwitchOn:1;   //0-1:��ͨ��Դ��  1-0���жϵ�Դ
	bool EnableVoltage:1;   //0-1:ʹ�ܹ��� ��  1-0��ֹͣ����
	bool QucikStop:1;  //1-0:����ֹͣ
	bool EnableOperation:1;  //0-1:ʹ�����У�  1-0:ֹͣ����
	bool res0:3;              //Ԥ��
	bool FaultRest:1;        //��λ����
	bool Halt:1;             //��ͣ
	bool res1:7;              //Ԥ��
}CONTROLWORD_BITS;

typedef union {
	CONTROLWORD_BITS bits;
	UINT16 all;
}CONTROLWORD;

typedef struct  {
	CONTROLWORD ControlWord;//x6040:������
	UINT16 ModesOfOperation;//x6060:����ģʽ1��Profile λ�ÿ���ģʽ��2���ٶȿ���ģʽ 3��Profile �ٶȿ���ģʽ 4��Profileת�ؿ���ģʽ  6��ԭ��ع�λ�ÿ���ģʽ 7������λ�ÿ���ģʽ  8��ͬ������λ��ģʽ 9��ͬ�������ٶ�ģʽ 10��ͬ������ת��ģʽ
	UINT32 SetTarget;//��Ӧ����ģʽ�µ�Ŀ��ֵ
	UINT32 GDCIndex;//bit0-bit15 GDC���������ţ�bit30/bit31 1 ����2д
	UINT32 GDCIndexValue;//д��ֵ
	UINT32 CycleTime;//ͨѶ����
	UINT32 SyncType;//0:��������ģʽ��2��SYNC0ͬ����ʽ
	UINT32 DC2DCValue;//����DC�ж�ʱ����
}GDC_WR,*pGDCWR;


extern GDC_WR GDCV05_CPU2_WR;
//

#endif /* USER_GDCV05_CPU2RAM_H_ */
