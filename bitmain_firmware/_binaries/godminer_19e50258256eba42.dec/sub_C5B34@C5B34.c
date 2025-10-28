int __fastcall sub_C5B34(const json_t *a1)
{
  int v2; // r0
  const char *v3; // r0
  const char *v4; // r0
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  int v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  int v13; // r0
  size_t v14; // r0
  _BYTE v16[28]; // [sp+18h] [bp-101Ch] BYREF
  const json_t *v17; // [sp+1018h] [bp-1Ch]
  size_t i; // [sp+101Ch] [bp-18h]
  const json_t *v19; // [sp+1020h] [bp-14h]
  int v20; // [sp+1024h] [bp-10h]
  _DWORD *v21; // [sp+1028h] [bp-Ch]
  const json_t *v22; // [sp+102Ch] [bp-8h]

  v17 = json_object_get(a1, "pic_sensor");
  if ( v17 && *(_DWORD *)v17 == 1 )
  {
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "pic sensor:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic_sensor",
      23,
      570,
      20,
      v16);
    for ( i = 0; ; ++i )
    {
      v14 = json_array_size(v17);
      if ( v14 <= i )
        break;
      v19 = json_array_get(v17, i);
      if ( !v19 || *(_DWORD *)v19 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "get array %d failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_pic_sensor",
          23,
          577,
          100,
          v16);
        return -1;
      }
      v22 = json_object_get(v19, "index");
      if ( !v22 || *(_DWORD *)v22 != 3 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "get array %d index failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_pic_sensor",
          23,
          584,
          100,
          v16);
        return -1;
      }
      V_LOCK();
      v2 = json_integer_value((int)v22);
      logfmt_raw(v16, 0x1000u, 0, "index: %d", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        587,
        20,
        v16);
      v20 = json_integer_value((int)v22);
      v21 = (_DWORD *)(*(_DWORD *)(dword_C27388 + 84) + 24 * v20);
      *v21 = v20;
      v21[2] = 0;
      v22 = json_object_get(v19, "type");
      if ( !v22 || *(_DWORD *)v22 != 2 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "get array %d type failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_pic_sensor",
          23,
          596,
          100,
          v16);
        return -1;
      }
      V_LOCK();
      v3 = json_string_value(v22);
      logfmt_raw(v16, 0x1000u, 0, "type: %s", v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        599,
        20,
        v16);
      v4 = json_string_value(v22);
      v5 = sub_C1B40(v4);
      v21[1] = v5;
      v22 = json_object_get(v19, "iic");
      if ( !v22 || *(_DWORD *)v22 != 3 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "get array %d bind_asic failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_pic_sensor",
          23,
          605,
          100,
          v16);
        return -1;
      }
      V_LOCK();
      v6 = json_integer_value((int)v22);
      logfmt_raw(v16, 0x1000u, 0, "iic: %d", v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        608,
        20,
        v16);
      v7 = json_integer_value((int)v22);
      v21[5] = v7;
      v22 = json_object_get(v19, "x");
      if ( !v22 || *(_DWORD *)v22 != 2 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "get array %d x failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_pic_sensor",
          23,
          614,
          100,
          v16);
        return -1;
      }
      V_LOCK();
      v8 = json_string_value(v22);
      logfmt_raw(v16, 0x1000u, 0, "x: %s", v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        617,
        20,
        v16);
      v9 = json_string_value(v22);
      v10 = sub_C1BB4(v9);
      v21[3] = v10;
      v22 = json_object_get(v19, "y");
      if ( !v22 || *(_DWORD *)v22 != 2 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "get array %d y failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_pic_sensor",
          23,
          623,
          100,
          v16);
        return -1;
      }
      V_LOCK();
      v11 = json_string_value(v22);
      logfmt_raw(v16, 0x1000u, 0, "y: %s", v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_pic_sensor",
        23,
        626,
        20,
        v16);
      v12 = json_string_value(v22);
      v13 = sub_C1C18(v12);
      v21[4] = v13;
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "get pic sensor failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_pic_sensor",
      23,
      567,
      100,
      v16);
    return -1;
  }
}
