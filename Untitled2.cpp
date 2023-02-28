#include <stdio.h>


struct ngay
{
	int ngay;
	int thang;
	int nam;
	
};
typedef struct ngay NGAY;
struct hopsua
{
	char nhanhieu[50];
	float trongluong;
	NGAY hansudung;
};
typedef struct hopsua HOPSUA;

void nhapngay(NGAY &n)
{
 printf("nhap ngay");
 scanf("%d",&n.ngay);
 printf("nhap thang");
 scanf("%d",&n.thang);
 printf("nhap nam");
 scanf("%d",&n.nam);
  
  
}
void nhaphopsua(HOPSUA &h)
{
 printf("nhap nhan hieu ");
 scanf("%c",&h.nhanhieu);
  printf("nhap trong luong ");
 scanf("%f",&h.trongluong);
  printf("nhap hansudung ");
 scanf("%ngay",&h.hansudung);
}
 void Xuathopsua(HOPSUA h)
{
 printf("nhap nhan hieu %s",h.nhanhieu);
  printf("nhap trong luong %d",h.trongluong);
  printf("nhap hansudung %NGAY",h.hansudung);
}
int main()
{
	NGAY t1;
	hopsua t2;
	nhapngay(t1);
	nhaphopsua(t2);
	Xuathopsua(t2);
	return 0;
	
	
}
