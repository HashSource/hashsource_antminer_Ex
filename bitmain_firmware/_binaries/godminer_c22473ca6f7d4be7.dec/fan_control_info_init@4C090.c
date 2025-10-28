int __fastcall fan_control_info_init(int a1, int a2, int a3, int a4, int a5, int a6, float a7, int a8, int a9)
{
  int v9; // r4
  float v10; // s13
  float v11; // s14
  float v12; // s15

  LOWORD(v9) = 25440;
  HIWORD(v9) = (unsigned int)&g_miner_type[88] >> 16;
  dword_1633EC = a1;
  dword_1633F0 = a2;
  dword_1633F4 = a3;
  dword_1633F8 = a4;
  dword_1633FC = a5;
  dword_163400 = a6;
  flt_163404 = a7;
  dword_163408 = a8;
  dword_16340C = a9;
  memset((void *)(v9 + 32), 0, 0x2Cu);
  if ( dword_1633EC == 2 )
  {
    v10 = (float)SLODWORD(flt_163404);
    v11 = (float)dword_1633F0;
    v12 = (float)dword_1633F4;
    *(_DWORD *)(v9 + 0x30) = -1056964608;
    *(float *)(v9 + 0x28) = v10;
    *(float *)(v9 + 0x24) = v11;
    *(float *)(v9 + 0x20) = v12;
    *(_DWORD *)(v9 + 0x34) = -1082130432;
    *(_DWORD *)(v9 + 0x38) = -1086324736;
  }
  return 0;
}
