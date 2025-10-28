int __fastcall sub_C80BC(const json_t *a1)
{
  int v2; // r0
  size_t v3; // r0
  _BYTE v5[20]; // [sp+18h] [bp-1014h] BYREF
  const json_t *v6; // [sp+1018h] [bp-14h]
  size_t i; // [sp+101Ch] [bp-10h]
  json_t *v8; // [sp+1020h] [bp-Ch]
  const json_t *v9; // [sp+1024h] [bp-8h]

  v6 = json_object_get(a1, "domain");
  if ( v6 && *(_DWORD *)v6 == 1 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "domain:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_domain",
      19,
      878,
      20,
      v5);
    for ( i = 0; ; ++i )
    {
      v3 = json_array_size(v6);
      if ( v3 <= i )
        break;
      v9 = json_array_get(v6, i);
      if ( !v9 || *(_DWORD *)v9 )
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "get array %d failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_domain",
          19,
          885,
          100,
          v5);
        return -1;
      }
      v8 = json_object_get(v9, "index");
      if ( !v8 || *(_DWORD *)v8 != 3 )
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "get array %d index failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_domain",
          19,
          892,
          100,
          v5);
        return -1;
      }
      V_LOCK();
      v2 = json_integer_value((int)v8);
      logfmt_raw(v5, 0x1000u, 0, "index: %d", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_domain",
        19,
        895,
        20,
        v5);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "get domain failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_domain",
      19,
      875,
      100,
      v5);
    return -1;
  }
}
