int platform_topol_init()
{
  _BYTE v2[8]; // [sp+14h] [bp-1108h] BYREF
  _BYTE v3[252]; // [sp+1014h] [bp-108h] BYREF
  const json_t *file; // [sp+1110h] [bp-Ch]
  int v5; // [sp+1114h] [bp-8h]

  v5 = 0;
  file = json_load_file("/etc/topol.conf", 0, (json_error_t *)v3);
  if ( file && !*(_DWORD *)file )
  {
    v5 = sub_C20B0(file);
    if ( v5 )
    {
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "parse machine failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "platform_topol_init",
        19,
        1496,
        20,
        v2);
    }
    else
    {
      v5 = sub_C25EC(file);
      if ( v5 )
      {
        V_LOCK();
        logfmt_raw(v2, 0x1000u, 0, "parse processor failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "platform_topol_init",
          19,
          1503,
          20,
          v2);
      }
      else
      {
        v5 = sub_C2870(file);
        if ( v5 )
        {
          V_LOCK();
          logfmt_raw(v2, 0x1000u, 0, "parse power failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "platform_topol_init",
            19,
            1510,
            20,
            v2);
        }
        else
        {
          v5 = sub_C343C(file);
          if ( v5 )
          {
            V_LOCK();
            logfmt_raw(v2, 0x1000u, 0, "parse fan failed");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "platform_topol_init",
              19,
              1517,
              20,
              v2);
          }
          else
          {
            v5 = sub_C8434(file);
            if ( v5 )
            {
              V_LOCK();
              logfmt_raw(v2, 0x1000u, 0, "parse chain failed");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "platform_topol_init",
                19,
                1525,
                20,
                v2);
            }
          }
        }
      }
    }
    sub_C1AD8((int)file);
    if ( v5 )
      return 34;
    else
      return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "load topol config file %s failed", "/etc/topol.conf");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "platform_topol_init",
      19,
      1489,
      20,
      v2);
    return -1;
  }
}
