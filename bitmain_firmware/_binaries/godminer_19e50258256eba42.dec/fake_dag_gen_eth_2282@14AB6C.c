int __fastcall fake_dag_gen_eth_2282(int a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6
  unsigned int v4; // r0
  int v5; // r5
  int v6; // r6
  int v7; // r7
  unsigned int v8; // r0
  _BYTE v11[64]; // [sp+44h] [bp-1040h] BYREF
  char v12; // [sp+1046h] [bp-3Eh] BYREF
  char v13; // [sp+1047h] [bp-3Dh] BYREF
  _DWORD v14[7]; // [sp+1048h] [bp-3Ch] BYREF
  int v15; // [sp+1064h] [bp-20h]
  void *s; // [sp+106Ch] [bp-18h]

  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "fake_dag_gen_eth_2282...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "fake_dag_gen_eth_2282",
    21,
    11913,
    40,
    v11);
  s = malloc(0xCu);
  if ( case_select == 8 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "cache gen self test start...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "fake_dag_gen_eth_2282",
      21,
      11917,
      40,
      v11);
    sub_106D34(a1, 9, 458781);
    sub_106D34(a1, 15, 3);
    sub_106D34(a1, 206, 1);
    sub_106D34(a1, 0, 2);
    sub_106D34(a1, 28, 1);
    sub_106D34(a1, 167, 44);
    sub_106D34(a1, 168, 856073);
    sub_106D34(a1, 169, 1761518);
    sub_106D34(a1, 170, 2342177);
    sub_106D34(a1, 171, 34538287);
    sub_106D34(a1, 163, 2589);
    sub_106D34(a1, 16, 894667645);
    sub_106D34(a1, 17, -220738048);
    sub_106D34(a1, 18, -1874575027);
    sub_106D34(a1, 19, -1988948495);
    sub_106D34(a1, 20, 80064413);
    sub_106D34(a1, 21, -1806913914);
    sub_106D34(a1, 22, 2009165893);
    sub_106D34(a1, 23, 1044996922);
    sub_106D34(a1, 179, 0);
    sub_106D34(a1, 164, 64);
    v13 = 0;
    usleep(0);
    while ( v13 != 1 )
    {
      sub_105E2C(a1, 0, 160, 16, &v13);
      sleep(1u);
    }
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "cache done!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "fake_dag_gen_eth_2282",
      21,
      11947,
      40,
      v11);
    memset(s, 0, 0xCu);
    if ( s )
    {
      sub_1075C0(a1, 0, 174, s);
      V_LOCK();
      v1 = *((unsigned __int8 *)s + 4);
      v2 = *((unsigned __int8 *)s + 8);
      v3 = *((unsigned __int16 *)s + 3);
      v4 = sub_FC76C(*(_DWORD *)s);
      logfmt_raw(v11, 0x1000u, 0, "asic %02x, core %02x, reg %04x state %08x", v1, v2, v3, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "fake_dag_gen_eth_2282",
        21,
        11953,
        40,
        v11);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "dag gen self test start...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "fake_dag_gen_eth_2282",
      21,
      11956,
      40,
      v11);
    sub_106D34(a1, 9, 458781);
    sub_106D34(a1, 15, 3);
    sub_106D34(a1, 206, 1);
    sub_106D34(a1, 0, 2);
    sub_106D34(a1, 28, 1);
    sub_106D34(a1, 167, 6);
    sub_106D34(a1, 168, 118449);
    sub_106D34(a1, 169, 157421);
    sub_106D34(a1, 170, 843701);
    sub_106D34(a1, 171, 34538287);
    sub_106D34(a1, 163, 2880);
    sub_106D34(a1, 27, 576);
    sub_106D34(a1, 164, 3200);
    v12 = 0;
    usleep(0x280u);
    while ( v12 != 1 )
    {
      sub_105E2C(a1, 0, 160, 8, &v12);
      sleep(1u);
    }
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "dag done!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "fake_dag_gen_eth_2282",
      21,
      11978,
      40,
      v11);
    memset(s, 0, 0xCu);
    if ( s )
    {
      sub_1075C0(a1, 0, 175, s);
      V_LOCK();
      sub_FBD60((int)v14, *(int *)(a1 + 272));
      v5 = *((unsigned __int8 *)s + 4);
      v6 = *((unsigned __int8 *)s + 8);
      v7 = *((unsigned __int16 *)s + 3);
      v8 = sub_FC76C(*(_DWORD *)s);
      logfmt_raw(
        v11,
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
        "asic %02x, core %02x, reg %02x state %08x",
        v5,
        v6,
        v7,
        v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "fake_dag_gen_eth_2282",
        21,
        11982,
        40,
        v11);
    }
  }
  if ( s )
    free(s);
  return 0;
}
