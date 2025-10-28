int __fastcall set_chain_mps_voltage(int a1, char a2, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v4; // r3
  __int16 v5; // r3
  char v7; // r0
  int v8; // r3
  char v9; // r0
  unsigned __int16 v12; // [sp+18h] [bp-1024h]
  _BYTE v15[24]; // [sp+24h] [bp-1018h] BYREF
  unsigned __int16 v16; // [sp+1024h] [bp-18h] BYREF
  unsigned __int16 v17; // [sp+1026h] [bp-16h] BYREF
  char v18; // [sp+1028h] [bp-14h] BYREF
  char v19; // [sp+1029h] [bp-13h]
  __int16 v20; // [sp+1032h] [bp-Ah]
  int v21; // [sp+1034h] [bp-8h]

  v12 = a3;
  v21 = 0;
  if ( a3 > 0xA5Au || a3 <= 0x92Du )
  {
    if ( a3 > 0xA59u )
    {
      v4 = 2650;
    }
    else
    {
      v4 = a3;
      if ( a3 < 0x92Eu )
        v4 = 2350;
    }
    v12 = v4;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "the mps_voltage_1 value-%d is out of the allowed range(%d-%d)", v12, 2350, 2650);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      282,
      40,
      v15);
  }
  if ( a4 > 0xA5Au || a4 <= 0x92Du )
  {
    if ( a4 > 0xA59u )
    {
      v5 = 2650;
    }
    else
    {
      v5 = a4;
      if ( a4 < 0x92Eu )
        v5 = 2350;
    }
    a4 = v5;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "the mps_voltage_2 value-%d is out of the allowed range(%d-%d)", a4, 2350, 2650);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      288,
      40,
      v15);
  }
  get_chain_mps_voltage1(a1, a2, &v17);
  if ( v12 == v17 )
  {
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "voltage1 is already set to %d", v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "set_chain_mps_voltage",
      21,
      294,
      20,
      v15);
    return 0;
  }
  else
  {
    get_chain_mps_voltage2(a1, a2, &v16);
    if ( a4 == v16 )
    {
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "voltage2 is already set to %d", a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/mps2973.c",
        164,
        "set_chain_mps_voltage",
        21,
        301,
        20,
        v15);
      return 0;
    }
    else
    {
      if ( !sub_1F2BA8(a1, a2, 0) )
      {
        ++v21;
      }
      else
      {
        v20 = ((__int16)(v12 - 490) / 10) & 0x1FF;
        v18 = (__int16)(v12 - 490) / 10;
        v19 = HIBYTE(v20);
        v7 = sub_1F21D0(a2);
        if ( !sub_1F2A74(a1, v7, 33, &v18, 2u) )
        {
          ++v21;
        }
        else if ( !sub_1F2BA8(a1, a2, 2u) )
        {
          ++v21;
        }
        else
        {
          v8 = a4 - 490;
          v20 = (32 * (v8 / 10)) & 0x3FE0;
          v18 = (32 * (v8 / 10)) | 0xC;
          v19 = HIBYTE(v20);
          v9 = sub_1F21D0(a2);
          if ( !sub_1F2A74(a1, v9, 13, &v18, 2u) )
          {
            ++v21;
          }
          else
          {
            get_chain_mps_voltage1(a1, a2, &v17);
            if ( v12 == v17 )
            {
              get_chain_mps_voltage2(a1, a2, &v16);
              if ( a4 != v16 )
              {
                V_LOCK();
                logfmt_raw(v15, 0x1000u, 0, "voltage2 set failed!", a4);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
                  164,
                  "set_chain_mps_voltage",
                  21,
                  353,
                  100,
                  v15);
                ++v21;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v15, 0x1000u, 0, "voltage1 set failed!", v12);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
                164,
                "set_chain_mps_voltage",
                21,
                345,
                100,
                v15);
              ++v21;
            }
          }
        }
      }
      if ( v21 > 0 )
      {
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "set_chain_mps_voltage error, fd %d", a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
          164,
          "set_chain_mps_voltage",
          21,
          360,
          100,
          v15);
      }
      return v21;
    }
  }
}
