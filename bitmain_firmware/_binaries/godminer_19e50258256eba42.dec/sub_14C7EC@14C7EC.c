int __fastcall sub_14C7EC(int a1, unsigned __int8 a2, const void *a3, unsigned int a4, char a5, void *dest, size_t n)
{
  int v7; // r0
  int e11; // r0
  unsigned int v10; // [sp+10h] [bp-102Ch]
  _BYTE v14[24]; // [sp+24h] [bp-1018h] BYREF
  _BYTE s[17]; // [sp+1024h] [bp-18h] BYREF
  unsigned __int8 v16; // [sp+1035h] [bp-7h]
  unsigned __int8 v17; // [sp+1036h] [bp-6h]
  unsigned __int8 v18; // [sp+1037h] [bp-5h]

  if ( a4 > 7 )
  {
    a4 = 8;
  }
  else if ( !a4 )
  {
    a4 = 1;
  }
  v10 = a4;
  if ( !g_bitmain_pic_state[2 * a1 + 1] )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s this chain not inited", "pic_1704_cmd");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "pic_1704_cmd",
      12,
      109,
      100,
      v14);
    v18 = 1;
  }
  s[0] = 85;
  s[1] = -86;
  s[2] = v10 + 4;
  s[3] = a2;
  memcpy(&s[4], a3, v10);
  v17 = v10 + 6;
  sub_14C674((int)s, (unsigned __int8)(v10 + 6));
  pthread_mutex_lock(&i2c_mutex_all);
  v7 = iic_write_e11(g_bitmain_pic_state[2 * a1], (int)s, v17, a1);
  if ( v7 == v17 )
  {
    usleep(0x2710u);
    memset(s, 0, 0x10u);
    v16 = n + 5;
    e11 = iic_read_e11(g_bitmain_pic_state[2 * a1], (int)s, (unsigned __int8)(n + 5), a1);
    if ( e11 == v16 )
    {
      if ( v16 == s[0] && a2 == s[1] && sub_14C730((int)s, v16) )
      {
        if ( (unsigned __int8)a5 == s[2] )
        {
          if ( n && dest )
            memcpy(dest, &s[3], n);
          v18 = 0;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v14, 0x1000u, 0, "%s cmd exce return err", "pic_1704_cmd");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
            175,
            "pic_1704_cmd",
            12,
            167,
            100,
            v14);
          v18 = 4;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, "%s recv data format err", "pic_1704_cmd");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
          175,
          "pic_1704_cmd",
          12,
          160,
          100,
          v14);
        v18 = 3;
      }
    }
    else
    {
      v18 = 2;
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s read iic err", "pic_1704_cmd");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
        175,
        "pic_1704_cmd",
        12,
        144,
        100,
        v14);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s write iic err", "pic_1704_cmd");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "pic_1704_cmd",
      12,
      125,
      100,
      v14);
    v18 = 1;
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v18;
}
