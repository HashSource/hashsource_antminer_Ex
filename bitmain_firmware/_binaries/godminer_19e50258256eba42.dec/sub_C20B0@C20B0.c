int __fastcall sub_C20B0(const json_t *a1)
{
  const char *v2; // r0
  size_t v3; // r0
  const char *v4; // r0
  const char *v5; // r0
  _BYTE v8[12]; // [sp+18h] [bp-100Ch] BYREF
  char *s; // [sp+1018h] [bp-Ch]
  const json_t *v10; // [sp+101Ch] [bp-8h]

  v10 = json_object_get(a1, "machine");
  if ( v10 && *(_DWORD *)v10 == 2 )
  {
    V_LOCK();
    v2 = json_string_value(v10);
    logfmt_raw(v8, 0x1000u, 0, "load machine %s conf", v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_machine",
      14,
      143,
      20,
      v8);
    s = (char *)json_string_value(v10);
    v3 = strlen(s);
    topol_machine = (int)calloc(v3 + 1, 1u);
    if ( topol_machine )
    {
      strcpy((char *)topol_machine, s);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "machine : %s ", topol_machine);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_machine",
        14,
        154,
        20,
        v8);
      v10 = json_object_get(a1, "hw_version");
      if ( v10 && *(_DWORD *)v10 == 2 )
      {
        V_LOCK();
        v4 = json_string_value(v10);
        logfmt_raw(v8, 0x1000u, 0, "hw_version: %s", v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_machine",
          14,
          162,
          20,
          v8);
        v10 = json_object_get(a1, "sw_version");
        if ( v10 && *(_DWORD *)v10 == 2 )
        {
          V_LOCK();
          v5 = json_string_value(v10);
          logfmt_raw(v8, 0x1000u, 0, "sw_version: %s", v5);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_machine",
            14,
            170,
            20,
            v8);
          return 0;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v8, 0x1000u, 0, "get sw_version failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_machine",
            14,
            167,
            100,
            v8);
          return -1;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "get hw_version failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_machine",
          14,
          159,
          100,
          v8);
        return -1;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "get machine failed, Cannot allocate space");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_machine",
        14,
        149,
        100,
        v8);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "get machine failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_machine",
      14,
      140,
      100,
      v8);
    return -1;
  }
}
