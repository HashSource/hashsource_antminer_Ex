int __fastcall sub_C72F0(const json_t *a1)
{
  const char *v2; // r0
  const char *v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  _BYTE v8[32]; // [sp+1Ch] [bp-1020h] BYREF
  int j; // [sp+101Ch] [bp-20h]
  int v10; // [sp+1020h] [bp-1Ch]
  const json_t *v11; // [sp+1024h] [bp-18h]
  int i; // [sp+1028h] [bp-14h]
  const json_t *v13; // [sp+102Ch] [bp-10h]

  v10 = dword_C27368;
  v11 = json_object_get(a1, "eeprom");
  if ( v11 && !*(_DWORD *)v11 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "eeprom:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_eeprom",
      19,
      764,
      20,
      v8);
    v13 = json_object_get(v11, "type");
    if ( v13 && *(_DWORD *)v13 == 2 )
    {
      V_LOCK();
      v2 = json_string_value(v13);
      logfmt_raw(v8, 0x1000u, 0, "type: %s", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_eeprom",
        19,
        772,
        20,
        v8);
      for ( i = 0; i < v10; ++i )
      {
        v3 = json_string_value(v13);
        v4 = sub_C1C7C(v3);
        *(_DWORD *)(dword_C27388 + 120 * i + 112) = v4;
      }
      v13 = json_object_get(v11, "i2c_addr");
      if ( v13 && *(_DWORD *)v13 == 3 )
      {
        V_LOCK();
        v5 = json_integer_value((int)v13);
        logfmt_raw(v8, 0x1000u, 0, "i2c_addr: %d", v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_eeprom",
          19,
          784,
          20,
          v8);
        for ( j = 0; j < v10; ++j )
        {
          v6 = json_integer_value((int)v13);
          *(_DWORD *)(dword_C27388 + 120 * j + 116) = v6;
        }
        return 0;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "get i2c_addr failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_chain_eeprom",
          19,
          781,
          100,
          v8);
        return -1;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "get type failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain_eeprom",
        19,
        769,
        100,
        v8);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "get eeprom failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain_eeprom",
      19,
      761,
      100,
      v8);
    return -1;
  }
}
