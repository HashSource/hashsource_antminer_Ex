int __fastcall get_chain_isl_voltage(unsigned __int8 a1, int a2, int a3)
{
  char *v3; // r9
  _DWORD *v4; // r11
  int v5; // r8
  int v6; // r5
  int v7; // r6
  int v8; // t1
  int v10; // [sp+10h] [bp-1038h]
  unsigned __int16 v12; // [sp+1Eh] [bp-102Ah] BYREF
  char v13[4136]; // [sp+20h] [bp-1028h] BYREF

  if ( a3 <= 2 )
    return 0;
  v3 = "QT";
  LOWORD(v4) = -14512;
  LOWORD(v5) = -224;
  v6 = a2 - 2;
  v7 = 80;
  v10 = a2 + 4;
  while ( 1 )
  {
    v12 = 0;
    sub_BB1A0(a1, v7, &v12);
    *(_WORD *)(v6 + 2) = v12;
    v6 += 2;
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, 1310800, v7, v12);
    V_UNLOCK();
    HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
    HIWORD(v5) = (unsigned int)"k fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n" >> 16;
    zlog(*v4, v5, 158, "get_chain_isl_voltage", 21, 202, 60, v13);
    if ( v6 == v10 )
      break;
    v8 = (unsigned __int8)*v3++;
    v7 = v8;
  }
  return 1;
}
