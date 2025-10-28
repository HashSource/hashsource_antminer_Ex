int __fastcall sram_mbist_eth_2282(int a1)
{
  _BYTE v4[12]; // [sp+38h] [bp-10CCh] BYREF
  _DWORD v5[7]; // [sp+1038h] [bp-CCh] BYREF
  int v6; // [sp+1054h] [bp-B0h]
  _DWORD v7[7]; // [sp+1058h] [bp-ACh] BYREF
  int v8; // [sp+1074h] [bp-90h]
  _DWORD v9[7]; // [sp+1078h] [bp-8Ch] BYREF
  int v10; // [sp+1094h] [bp-70h]
  _DWORD v11[7]; // [sp+1098h] [bp-6Ch] BYREF
  int v12; // [sp+10B4h] [bp-50h]
  _DWORD v13[7]; // [sp+10B8h] [bp-4Ch] BYREF
  int v14; // [sp+10D4h] [bp-30h]
  unsigned int v15; // [sp+10D8h] [bp-2Ch]
  int v16; // [sp+10DCh] [bp-28h]
  signed int j; // [sp+10E0h] [bp-24h]
  int v18; // [sp+10E4h] [bp-20h]
  void *ptr; // [sp+10E8h] [bp-1Ch]
  signed int v20; // [sp+10ECh] [bp-18h]
  signed int i; // [sp+10F0h] [bp-14h]
  unsigned int v22; // [sp+10F4h] [bp-10h]

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s...", "sram_mbist_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "sram_mbist_eth_2282",
    19,
    2967,
    40,
    v4);
  v20 = 0;
  v18 = 0;
  ptr = malloc(0x1440u);
  sub_106BA8(a1, 28, 1310720);
  sub_106BA8(a1, 100, 1100);
  sub_106BA8(a1, 97, 2);
LABEL_2:
  usleep(0x3E8u);
  v20 = sub_1062CC(a1, 97, ptr);
  if ( v20 )
  {
    for ( i = 0; i < v20; ++i )
    {
      if ( *((_WORD *)ptr + 6 * i + 3) == 97 )
      {
        v22 = sub_FC76C(*((_DWORD *)ptr + 3 * i));
        V_LOCK();
        sub_FBD60((int)v7, *(int *)(a1 + 272));
        logfmt_raw(
          v4,
          0x1000u,
          0,
          v8,
          v7[0],
          v7[1],
          v7[2],
          v7[3],
          v7[4],
          v7[5],
          v7[6],
          v8,
          "asic %02x, reg %04x state %08x",
          *((unsigned __int8 *)ptr + 4),
          *((unsigned __int16 *)ptr + 3),
          v22);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "sram_mbist_eth_2282",
          19,
          2996,
          20,
          v4);
        v16 = v22 & 0x40;
        if ( (v22 & 0x40) == 0 )
          goto LABEL_2;
        if ( ++v18 == v20 )
        {
          V_LOCK();
          sub_FBD60((int)v9, *(int *)(a1 + 272));
          logfmt_raw(v4, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "sram bist done");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "sram_mbist_eth_2282",
            19,
            3004,
            40,
            v4);
          v18 = 0;
          break;
        }
      }
    }
    v20 = sub_1062CC(a1, 98, ptr);
    if ( v20 )
    {
      for ( j = 0; j < v20; ++j )
      {
        if ( *((_WORD *)ptr + 6 * j + 3) == 98 )
        {
          v15 = sub_FC76C(*((_DWORD *)ptr + 3 * j));
          V_LOCK();
          sub_FBD60((int)v13, *(int *)(a1 + 272));
          logfmt_raw(
            v4,
            0x1000u,
            0,
            v14,
            v13[0],
            v13[1],
            v13[2],
            v13[3],
            v13[4],
            v13[5],
            v13[6],
            v14,
            "asic %02x, reg %04x state %08x",
            *((unsigned __int8 *)ptr + 4),
            *((unsigned __int16 *)ptr + 3),
            v15);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "sram_mbist_eth_2282",
            19,
            3025,
            20,
            v4);
          if ( v15 )
          {
            V_LOCK();
            logfmt_raw(v4, 0x1000u, 0, "sram bist meet error for core: %02x!", *((unsigned __int8 *)ptr + 12 * j + 8));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "sram_mbist_eth_2282",
              19,
              3030,
              40,
              v4);
          }
          else
          {
            V_LOCK();
            logfmt_raw(v4, 0x1000u, 0, "sram bist success!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "sram_mbist_eth_2282",
              19,
              3028,
              40,
              v4);
          }
        }
      }
      return 0;
    }
    else
    {
      V_LOCK();
      sub_FBD60((int)v11, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v12,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4],
        v11[5],
        v11[6],
        v12,
        "get chip reg addr %02x failed",
        98);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "sram_mbist_eth_2282",
        19,
        3015,
        100,
        v4);
      if ( ptr )
        free(ptr);
      return 40;
    }
  }
  else
  {
    V_LOCK();
    sub_FBD60((int)v5, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v6,
      v5[0],
      v5[1],
      v5[2],
      v5[3],
      v5[4],
      v5[5],
      v5[6],
      v6,
      "get chip reg addr %02x failed",
      97);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "sram_mbist_eth_2282",
      19,
      2986,
      100,
      v4);
    if ( ptr )
      free(ptr);
    return 40;
  }
}
