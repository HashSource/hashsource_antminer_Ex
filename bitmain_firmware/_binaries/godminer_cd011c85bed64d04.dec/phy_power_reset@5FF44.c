int __fastcall phy_power_reset(int a1)
{
  int v2; // r8
  int v3; // r0
  char v4; // r4
  char v5; // r1
  int v7; // [sp+28h] [bp-1020h] BYREF
  _BYTE v8[4096]; // [sp+48h] [bp-1000h] BYREF

  v2 = 0;
  V_LOCK(a1);
  V_INT((int)&v7, "chain");
  v3 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_power_reset",
    15,
    628,
    60,
    v8);
  sub_5C910(a1, 80, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  do
  {
    v4 = v2;
    v5 = v2++;
    sub_5C9BC(a1, v5, 1u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 2u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 5u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 6u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 9u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 0xAu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 0xDu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 0xEu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 0, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 3u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 7u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 8u, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 0xBu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
    sub_5C9BC(a1, v4, 0xFu, 80, 0x10000);
    usleep((__useconds_t)&stru_1869C.st_value);
  }
  while ( v2 != 8 );
  return 0;
}
