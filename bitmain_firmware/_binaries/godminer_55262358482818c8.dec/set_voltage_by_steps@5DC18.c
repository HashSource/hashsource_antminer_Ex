int __fastcall set_voltage_by_steps(int a1, int a2, unsigned int a3)
{
  int v5; // r3
  int v6; // r1
  int v7; // r4
  int v8; // r5
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r6
  signed int v12; // r8
  int v14; // r1
  int v15; // r3
  int v16; // r1
  char v17[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    LOWORD(v5) = 27148;
    HIWORD(v5) = (unsigned int)"ted" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v5, a1);
    V_UNLOCK();
    LOWORD(v6) = 26816;
    HIWORD(v6) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v6, 153, "set_voltage_by_steps", 20, 464, 40, v17);
    if ( byte_195C10 )
      v7 = dword_195C2C;
    else
      v7 = sub_5D710();
    v8 = a1 - v7;
    if ( a1 != v7 )
    {
      LOWORD(v9) = -13107;
      if ( a3 >= 0x64 )
        v10 = 100;
      else
        v10 = a3;
      HIWORD(v9) = -13108;
      v11 = (unsigned int)((v10 * (unsigned __int64)v9) >> 32) >> 3;
      if ( v8 < 0 )
        v11 = -v11;
      v12 = abs32(v11);
      while ( (int)abs32(v8) > v12 )
      {
        v7 += v11;
        v8 -= v11;
        sub_5D814(v7);
      }
      if ( a1 != v7 )
        sub_5D814(a1);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v14) = 28468;
    HIWORD(v14) = (unsigned int)"%s, power has not init!" >> 16;
    LOWORD(v15) = 27800;
    HIWORD(v15) = (unsigned int)"r" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v15, v14);
    V_UNLOCK();
    LOWORD(v16) = 26816;
    HIWORD(v16) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v16, 153, "set_voltage_by_steps", 20, 460, 100, v17);
    return -1;
  }
}
