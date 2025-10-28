int __fastcall fan_control_info_init(int a1, int a2, int a3, int a4, int a5, int a6, float a7, int a8, int a9)
{
  dword_1633EC = a1;
  dword_1633F0 = a2;
  dword_1633F4 = a3;
  dword_1633F8 = a4;
  dword_1633FC = a5;
  dword_163400 = a6;
  flt_163404 = a7;
  dword_163408 = a8;
  dword_16340C = a9;
  memset(&flt_166388, 0, 0x2Cu);
  if ( dword_1633EC == 2 )
  {
    flt_166398 = -8.0;
    flt_166390 = (float)SLODWORD(flt_163404);
    flt_16638C = (float)dword_1633F0;
    flt_166388 = (float)dword_1633F4;
    flt_16639C = -1.0;
    flt_1663A0 = -0.75;
  }
  return 0;
}
