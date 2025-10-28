int __fastcall cmnadj_20210813_500M_test(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v12; // r3
  int v13; // r3
  char v14[4080]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -24292;
  HIWORD(v8) = (unsigned int)"external_all_phy" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v8, "cmnadj_20210813_500M_test", a5, a3);
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "cmnadj_20210813_500M_test", 25, 8215, 60, v14);
  if ( a4 == 8 )
    LOWORD(a4) = 15;
  if ( a5 == 1 )
  {
    sub_5C158(a1, a3, 144, -97);
    sub_5C158(a1, a3, 145, -2147450879);
    v12 = 64;
LABEL_8:
    sub_5C158(a1, a3, 144, v12);
    LOWORD(v13) = -32756;
    goto LABEL_9;
  }
  if ( a5 == 2 )
  {
    sub_5C158(a1, a3, 144, -97);
    sub_5C158(a1, a3, 145, -2147450879);
    v12 = 96;
    goto LABEL_8;
  }
  if ( a5 != 3 )
    return 0;
  sub_5C158(a1, a3, 144, -97);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 96);
  sub_5C158(a1, a3, 145, -2147450868);
  sub_5C158(a1, a3, 144, -805306369);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 0x10000000);
  LOWORD(v13) = -32692;
LABEL_9:
  HIWORD(v13) = 0x8000;
  sub_5C158(a1, a3, 145, v13);
  sub_5D8A4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0);
  sub_5C158(a1, a3, 144, 0);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 0);
  sub_5C158(a1, a3, 145, -2147442687);
  return 0;
}
