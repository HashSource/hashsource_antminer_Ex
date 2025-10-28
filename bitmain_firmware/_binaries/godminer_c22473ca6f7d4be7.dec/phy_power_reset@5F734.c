int __fastcall phy_power_reset(int a1)
{
  int v2; // r8
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r1
  char v7; // r4
  char v8; // r1
  _DWORD v10[7]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+44h] [bp-1004h]
  char v12[4096]; // [sp+48h] [bp-1000h] BYREF

  v2 = 0;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v10, v3, *(int *)(a1 + 140));
  LOWORD(v4) = -22412;
  HIWORD(v4) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v4, "phy_power_reset");
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -25512;
  HIWORD(v6) = (unsigned int)"one" >> 16;
  zlog(*v5, v6, 154, "phy_power_reset", 15, 628, 60, v12);
  sub_5C100(a1, 80, 0);
  usleep((__useconds_t)&stru_18694.st_info);
  do
  {
    v7 = v2;
    v8 = v2++;
    sub_5C1AC(a1, v8, 1u, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 2u, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 5u, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 6u, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 9u, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 0xAu, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 0xDu, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 0xEu, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 0, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 3u, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 7u, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 8u, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 0xBu, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
    sub_5C1AC(a1, v7, 0xFu, 80, 0x10000);
    usleep((__useconds_t)&stru_18694.st_info);
  }
  while ( v2 != 8 );
  return 0;
}
