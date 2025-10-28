int __fastcall check_cmn_calibration_status_1_phy(int a1, char a2, int a3)
{
  char *v6; // r1
  _DWORD *v7; // r5
  int v8; // r4
  int v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r1
  _DWORD v14[7]; // [sp+28h] [bp-1060h] BYREF
  int v15; // [sp+44h] [bp-1044h]
  _BYTE v16[4]; // [sp+48h] [bp-1040h] BYREF
  int v17; // [sp+4Ch] [bp-103Ch]
  char v18[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v6) = -7948;
  HIWORD(v6) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v7) = -14512;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v14, v6, *(int *)(a1 + 140));
  LOWORD(v8) = -22412;
  HIWORD(v8) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    v8,
    "check_cmn_calibration_status_1_phy");
  V_UNLOCK();
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  zlog(*v7, v9, 154, "check_cmn_calibration_status_1_phy", 34, 8480, 60, v18);
  if ( serdes_apb_read_back_1_chip(a1, a2, a3, 0x801Du, (int)v16) )
  {
    V_LOCK();
    LOWORD(v10) = -22928;
    LOWORD(v11) = -23612;
    HIWORD(v11) = (unsigned int)"data_preemptive" >> 16;
    if ( (v17 & 0x8000) != 0 )
    {
      HIWORD(v10) = (unsigned int)&unk_1399A0 >> 16;
      v11 = v10;
    }
    logfmt_raw(v18, 0x1000u, 0, "chip_id %02x core_id %02x cmn clibration %08x", v16[0], v16[1], v17, v11);
    V_UNLOCK();
    LOWORD(v12) = -25512;
    HIWORD(v12) = (unsigned int)"one" >> 16;
    zlog(*v7, v12, 154, "check_cmn_calibration_status_1_phy", 34, 8486, 60, v18);
  }
  return 0;
}
