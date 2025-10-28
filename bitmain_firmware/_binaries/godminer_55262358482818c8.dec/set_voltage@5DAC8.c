int __fastcall set_voltage(int a1, int a2)
{
  int v3; // r3
  int v4; // r1
  int v6; // r3
  int v7; // r1
  int v8; // r1
  int v9; // r3
  int v10; // r1
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    LOWORD(v3) = 27128;
    HIWORD(v3) = (unsigned int)"age power is not inited" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v3, a1);
    V_UNLOCK();
    LOWORD(v4) = 26816;
    HIWORD(v4) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v4, 153, "set_voltage", 11, 453, 40, v11);
    return sub_5D814(a1);
  }
  else
  {
    V_LOCK();
    LOWORD(v6) = 27096;
    HIWORD(v6) = (unsigned int)"ain = %d, voltage = %f" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v6);
    V_UNLOCK();
    LOWORD(v7) = 26816;
    HIWORD(v7) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v7, 153, "set_voltage", 11, 449, 100, v11);
    V_LOCK();
    LOWORD(v8) = 28468;
    LOWORD(v9) = 27800;
    HIWORD(v8) = (unsigned int)"%s, power has not init!" >> 16;
    HIWORD(v9) = (unsigned int)"r" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v9, v8);
    V_UNLOCK();
    LOWORD(v10) = 26816;
    HIWORD(v10) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v10, 153, "set_voltage", 11, 450, 100, v11);
    return -1;
  }
}
