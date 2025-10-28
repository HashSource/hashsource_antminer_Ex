int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // r3
  int v14; // r1
  char var1004[4104]; // [sp+38h] [bp-1004h] BYREF
  int varg_r0; // [sp+1048h] [bp+Ch]
  int varg_r1; // [sp+104Ch] [bp+10h]
  int varg_r2; // [sp+1050h] [bp+14h]
  int varg_r3; // [sp+1054h] [bp+18h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  dword_192720 = a1;
  dword_192724 = a2;
  dword_192728 = a3;
  dword_19272C = a4;
  dword_192730 = a5;
  dword_192734 = a6;
  flt_192738 = a7;
  dword_19273C = a8;
  dword_192740 = a9;
  dword_192744 = a10;
  dword_192748 = a11;
  dword_19274C = a12;
  dword_192750 = a13;
  memset(&flt_195C58, 0, 0x2Cu);
  if ( dword_192720 == 2 )
  {
    LODWORD(flt_195C68) = dword_192744;
    flt_195C60 = (float)SLODWORD(flt_192738);
    LODWORD(flt_195C6C) = dword_192748;
    LODWORD(flt_195C70) = dword_19274C;
    flt_195C5C = (float)dword_192724;
    LODWORD(flt_195C74) = dword_192750;
    flt_195C58 = (float)dword_192728;
  }
  V_LOCK();
  LOWORD(v13) = 28496;
  HIWORD(v13) = (unsigned int)"%s unknow temp type %d" >> 16;
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    v13,
    flt_195C68,
    flt_195C6C,
    flt_195C70,
    flt_195C74,
    flt_195C60,
    flt_195C5C,
    flt_195C58);
  V_UNLOCK();
  LOWORD(v14) = 28256;
  HIWORD(v14) = (unsigned int)"st likely a bad sensor" >> 16;
  zlog(g_zc, v14, 159, "fan_control_info_init", 21, 344, 40, var1004);
  return 0;
}
