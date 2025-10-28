int __fastcall diff_to_be256_target_base(int a1)
{
  double v1; // d0
  double v2; // d1
  double v4; // d8
  unsigned __int64 v5; // r0
  double v6; // r0
  double v7; // d8
  unsigned __int64 v8; // r0
  double v9; // r0
  double v10; // d8
  unsigned __int64 v11; // r0
  double v12; // r0
  unsigned __int64 v13; // r0
  unsigned int v14; // r2
  unsigned int v15; // r3
  unsigned __int64 v16; // r0
  unsigned int v17; // r2
  unsigned int v18; // r3
  int v19; // r3
  int v20; // r1
  unsigned int v22; // [sp+10h] [bp-1004h] BYREF
  unsigned int v23; // [sp+14h] [bp-1000h]
  unsigned int v24; // [sp+18h] [bp-FFCh]
  unsigned int v25; // [sp+1Ch] [bp-FF8h]
  unsigned __int64 v26; // [sp+20h] [bp-FF4h]
  unsigned int v27; // [sp+28h] [bp-FECh]
  unsigned int v28; // [sp+2Ch] [bp-FE8h]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    LOWORD(v19) = -12204;
    HIWORD(v19) = (unsigned int)"_to_be256_target_base" >> 16;
    logfmt_raw((char *)&v22, 0x1000u, 0, v19);
    V_UNLOCK();
    LOWORD(v20) = -12172;
    HIWORD(v20) = (unsigned int)"o passed to set_target" >> 16;
    zlog(g_zc, v20, 158, "diff_to_be256_target_base", 25, 169, 20, &v22);
  }
  else
  {
    v4 = v2 / v1;
  }
  v5 = (unsigned __int64)(v4 * 1.59309191e-58);
  v22 = bswap32(HIDWORD(v5));
  v23 = bswap32(v5);
  LODWORD(v6) = sub_144A2C(v5);
  v7 = v4 - v6 * 6.27710174e57;
  v8 = (unsigned __int64)(v7 * 2.93873588e-39);
  v25 = bswap32(v8);
  v24 = bswap32(HIDWORD(v8));
  LODWORD(v9) = sub_144A2C(v8);
  v10 = v7 - v9 * 3.40282367e38;
  v11 = (unsigned __int64)(v10 * 5.42101086e-20);
  v26 = _byteswap_uint64(v11);
  LODWORD(v12) = sub_144A2C(v11);
  v13 = (unsigned __int64)(v10 - v12 * 1.84467441e19);
  v28 = bswap32(v13);
  v27 = bswap32(HIDWORD(v13));
  HIDWORD(v13) = v23;
  v14 = v24;
  v15 = v25;
  *(_DWORD *)a1 = v22;
  *(_DWORD *)(a1 + 4) = HIDWORD(v13);
  *(_DWORD *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 12) = v15;
  v16 = v26;
  v17 = v27;
  v18 = v28;
  *(_QWORD *)(a1 + 16) = v26;
  *(_DWORD *)(a1 + 24) = v17;
  *(_DWORD *)(a1 + 28) = v18;
  return v16;
}
