int __fastcall sub_C6D9C(const json_t *a1)
{
  const char *v2; // r0
  int v3; // r0
  int v4; // r0
  _BYTE v6[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v7; // [sp+101Ch] [bp-10h]
  const json_t *v8; // [sp+1020h] [bp-Ch]
  const json_t *v9; // [sp+1024h] [bp-8h]

  v7 = 0;
  v8 = json_object_get(a1, "pic");
  if ( v8 && !*(_DWORD *)v8 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "pic:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic",
      16,
      718,
      20,
      v6);
    v9 = json_object_get(v8, "type");
    if ( v9 && *(_DWORD *)v9 == 2 )
    {
      V_LOCK();
      v2 = json_string_value(v9);
      logfmt_raw(v6, 0x1000u, 0, "type: %s", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic",
        16,
        726,
        20,
        v6);
      v9 = json_object_get(v8, "i2c_addr");
      if ( v9 && *(_DWORD *)v9 == 3 )
      {
        V_LOCK();
        v3 = json_integer_value((int)v9);
        logfmt_raw(v6, 0x1000u, 0, "i2c_addr: %d", v3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_pic",
          16,
          734,
          20,
          v6);
        v9 = json_object_get(v8, "device_high");
        if ( v9 && *(_DWORD *)v9 == 3 )
        {
          V_LOCK();
          v4 = json_integer_value((int)v9);
          logfmt_raw(v6, 0x1000u, 0, "device_high: %d", v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_chain_pic",
            16,
            742,
            20,
            v6);
          *(_DWORD *)(dword_C27388 + 64) = json_integer_value((int)v9);
          if ( *(_DWORD *)(dword_C27388 + 88) == 1 || *(_DWORD *)(dword_C27388 + 88) == 2 )
            return sub_C5B34(v8);
          return v7;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "get device_high failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_chain_pic",
            16,
            739,
            100,
            v6);
          return -1;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "get i2c_addr failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_pic",
          16,
          731,
          100,
          v6);
        return -1;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "get type failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic",
        16,
        723,
        100,
        v6);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "get pic failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic",
      16,
      715,
      100,
      v6);
    return -1;
  }
}
