int __fastcall fan_control_info_init(int a1, int a2, int a3, int a4, int a5, int a6, float a7, int a8, int a9)
{
  dword_1643EC = a1;
  dword_1643F0 = a2;
  dword_1643F4 = a3;
  dword_1643F8 = a4;
  dword_1643FC = a5;
  dword_164400 = a6;
  flt_164404 = a7;
  dword_164408 = a8;
  dword_16440C = a9;
  memset(&flt_167398, 0, 0x2Cu);
  if ( dword_1643EC == 2 )
  {
    flt_1673A8 = -8.0;
    flt_1673A0 = (float)SLODWORD(flt_164404);
    flt_16739C = (float)dword_1643F0;
    flt_167398 = (float)dword_1643F4;
    flt_1673AC = -1.0;
    flt_1673B0 = -0.75;
  }
  return 0;
}
