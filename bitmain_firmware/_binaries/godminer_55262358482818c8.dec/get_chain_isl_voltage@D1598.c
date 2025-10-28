int __fastcall get_chain_isl_voltage(unsigned __int8 a1, int a2, int a3)
{
  char *v3; // r9
  int v4; // r10
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
  LOWORD(v4) = 30820;
  LOWORD(v5) = 30520;
  v6 = a2 - 2;
  v7 = 80;
  v10 = a2 + 4;
  while ( 1 )
  {
    v12 = 0;
    sub_D1560(a1, v7, &v12);
    *(_WORD *)(v6 + 2) = v12;
    v6 += 2;
    V_LOCK();
    HIWORD(v4) = (unsigned int)"back_data[3] = 0x%02x" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v4, v7, v12);
    V_UNLOCK();
    HIWORD(v5) = (unsigned int)"set_chain_isl_voltage" >> 16;
    zlog(g_zc, v5, 168, "get_chain_isl_voltage", 21, 202, 60, v13);
    if ( v6 == v10 )
      break;
    v8 = (unsigned __int8)*v3++;
    v7 = v8;
  }
  return 1;
}
