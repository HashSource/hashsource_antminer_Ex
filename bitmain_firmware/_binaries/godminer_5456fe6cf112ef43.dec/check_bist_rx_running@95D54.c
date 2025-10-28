int __fastcall check_bist_rx_running(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v7; // r0
  int v8; // r3
  int v9; // r3
  unsigned __int16 v10; // r6
  int back; // r0
  _QWORD *v12; // r4
  int v13; // r0
  int v14; // r0
  int v15; // r12
  int v16; // r2
  int v17; // r3
  int v18; // r0
  unsigned int v19; // r3
  _QWORD *v21; // [sp+38h] [bp-10A4h]
  int v22; // [sp+44h] [bp-1098h]
  int v23; // [sp+44h] [bp-1098h]
  unsigned int v25; // [sp+50h] [bp-108Ch]
  char v27[32]; // [sp+58h] [bp-1084h] BYREF
  int v28; // [sp+78h] [bp-1064h] BYREF
  _QWORD v29[8]; // [sp+98h] [bp-1044h] BYREF
  _BYTE v30[4100]; // [sp+D8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v27, "chain");
  v7 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_rx_running",
    21,
    8871,
    60,
    v30);
  v22 = 0;
  if ( a3 == 255 )
    v8 = 16;
  else
    v8 = 1;
  v25 = v8;
  do
  {
    v9 = v22;
    if ( a3 != 255 )
      v9 = a3;
    v23 = v9;
    if ( a4 )
    {
      v10 = 0;
      do
      {
        back = serdes_apb_read_back(a1, a2, v23, (unsigned __int16)(v10 << 12) | 0x11, (int)v29);
        if ( back > 0 )
        {
          v12 = v29;
          v21 = &v29[back];
          do
          {
            v17 = *((_DWORD *)v12 + 1);
            if ( (v17 & 0x400) != 0 || (v17 & 0x8000000) == 0 )
            {
              V_LOCK(back);
              V_INT((int)&v28, "chain");
              v13 = logfmt_raw((int)v30, 0x1000u);
              V_UNLOCK(v13);
              v14 = g_zc;
              v15 = 100;
              v16 = 8888;
            }
            else
            {
              V_LOCK(back);
              v18 = logfmt_raw((int)v30, 0x1000u);
              V_UNLOCK(v18);
              v14 = g_zc;
              v15 = 60;
              v16 = 8885;
            }
            ++v12;
            back = zlog(
                     v14,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/g"
                     "odminer-origin_master/backend/backend_eth/backend_eth.c",
                     154,
                     "check_bist_rx_running",
                     21,
                     v16,
                     v15,
                     v30);
          }
          while ( v12 != v21 );
        }
        ++v10;
      }
      while ( a4 > (unsigned int)v10 );
    }
    v19 = (unsigned __int8)(v23 + 1);
    v22 = v19;
  }
  while ( v25 > v19 );
  return 0;
}
