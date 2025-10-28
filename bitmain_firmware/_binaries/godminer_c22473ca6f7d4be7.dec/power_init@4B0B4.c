int power_init()
{
  double v0; // d0
  int v1; // r4
  int v2; // r9
  int v3; // r3
  _DWORD *v4; // r5
  int v5; // r1
  unsigned __int8 *v6; // r2
  int v7; // r1
  int v8; // r3
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r7
  double v15; // d11
  int v16; // r9
  int v17; // r8
  double v18; // d9
  char *all_created_runtime; // r0
  char *v20; // r10
  int i; // r6
  int v22; // t1
  int v23; // r7
  int v24; // r3
  int v25; // r1
  int v27; // r3
  _DWORD *v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r0
  int v32; // r2
  int v33; // r1
  int v34; // r1
  int v35; // r3
  int v36; // [sp+4h] [bp-1028h]
  int v37; // [sp+4h] [bp-1028h]
  int v38; // [sp+18h] [bp-1014h]
  int v39; // [sp+1Ch] [bp-1010h]
  int v40; // [sp+24h] [bp-1008h] BYREF
  char v41[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = (unsigned __int8)byte_166340;
  if ( byte_166340 )
  {
    v2 = (unsigned __int16)bitmain_power_version();
    LOWORD(v4) = -14512;
    V_LOCK();
    LOWORD(v3) = 18396;
    HIWORD(v3) = (unsigned int)"\":{\"data\":%lld,\"type\":\"EXTRA_NONCE\"}}" >> 16;
    logfmt_raw(v41, 0x1000u, 0, v3, v2);
    HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
    V_UNLOCK();
    LOWORD(v5) = 18180;
    HIWORD(v5) = (unsigned int)"capabilities_vbk" >> 16;
    zlog(*v4, v5, 143, "power_init", 10, 219, 60, v41);
    if ( (unsigned __int16)word_166342 == v2 )
    {
      if ( (unsigned __int16)bitmain_power_fw_version() > 0x14u )
        get_power_voltage_calibration_data();
      LOWORD(v6) = 21476;
      HIWORD(v6) = (unsigned int)&unk_1642BC >> 16;
      byte_166355 = 0;
      v7 = *v6;
      dword_166358 = 0;
      dword_16635C = 0;
      byte_16633C = 1;
      if ( v7 || is_eeprom_loaded() )
        dword_166348 = opt_custom_voltage;
      V_LOCK();
      LOWORD(v8) = 18472;
      HIWORD(v8) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rel"
                                 "ease/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
      logfmt_raw(v41, 0x1000u, 0, v8);
      V_UNLOCK();
      LOWORD(v9) = 18180;
      HIWORD(v9) = (unsigned int)"capabilities_vbk" >> 16;
      zlog(*v4, v9, 143, "power_init", 10, 241, 60, v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "current_voltage_raw     = %d", dword_166358);
      V_UNLOCK();
      LOWORD(v10) = 18180;
      HIWORD(v10) = (unsigned int)"capabilities_vbk" >> 16;
      zlog(*v4, v10, 143, "power_init", 10, 242, 60, v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "working_voltage_raw     = %d", dword_166348);
      V_UNLOCK();
      LOWORD(v11) = 18180;
      HIWORD(v11) = (unsigned int)"capabilities_vbk" >> 16;
      zlog(*v4, v11, 143, "power_init", 10, 243, 60, v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "check_asic_voltage_enable     = %d", (unsigned __int8)byte_16634C);
      V_UNLOCK();
      LOWORD(v12) = 18180;
      HIWORD(v12) = (unsigned int)"capabilities_vbk" >> 16;
      zlog(*v4, v12, 143, "power_init", 10, 244, 60, v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "check_asic_voltage_raw  = %d", dword_166350);
      V_UNLOCK();
      LOWORD(v13) = 18180;
      HIWORD(v13) = (unsigned int)"capabilities_vbk" >> 16;
      zlog(*v4, v13, 143, "power_init", 10, 245, 60, v41);
      if ( byte_166340 && byte_16634C )
        v14 = (unsigned __int16)set_check_asic_voltage(0);
      else
        v14 = (unsigned __int16)set_working_voltage(0);
      if ( v14 )
      {
        V_LOCK();
        LOWORD(v35) = 18616;
        HIWORD(v35) = (unsigned int)"rontend_vbk.c" >> 16;
        logfmt_raw(v41, 0x1000u, 0, v35);
        V_UNLOCK();
        v31 = *v4;
        v32 = 253;
      }
      else
      {
        bitmain_power_on();
        byte_166354 = 1;
        sleep(1u);
        if ( opt_algo == 5 )
          return 0;
        if ( byte_16633C )
        {
          v38 = dword_166358;
          v15 = (double)dword_166358 * 0.75 / 100.0;
        }
        else
        {
          v15 = -0.0075;
          v38 = -1;
        }
        LOWORD(v16) = 18644;
        LOWORD(v17) = 18180;
        HIWORD(v17) = (unsigned int)"capabilities_vbk" >> 16;
        v39 = 3;
        do
        {
          v18 = 0.0;
          sleep(1u);
          all_created_runtime = (char *)get_all_created_runtime(&v40);
          if ( v40 > 0 )
          {
            v20 = all_created_runtime - 4;
            for ( i = 0; i < v40; ++i )
            {
              v22 = *((_DWORD *)v20 + 1);
              v20 += 4;
              v23 = *(_DWORD *)(v22 + 140);
              pic1704_get_an_voltage1(v23);
              V_LOCK();
              HIWORD(v16) = (unsigned int)"t have 'command' object" >> 16;
              logfmt_raw(v41, 0x1000u, 0, v16, v23, v36, v0);
              V_UNLOCK();
              zlog(*v4, v17, 143, "read_feedback_voltage", 21, 49, 20, v41);
              if ( v0 > 0.1 )
              {
                if ( v0 >= v18 )
                {
                  if ( v18 < 0.1 )
                    v18 = v0;
                }
                else
                {
                  v18 = v0;
                }
              }
            }
          }
          V_LOCK();
          LOWORD(v24) = 18692;
          HIWORD(v24) = (unsigned int)"UTH_FAILURE" >> 16;
          logfmt_raw(v41, 0x1000u, 0, v24, v18);
          V_UNLOCK();
          zlog(*v4, v17, 143, "get_minimal_feedback_voltage", 28, 65, 20, v41);
          if ( v15 <= v18 )
          {
            V_LOCK();
            logfmt_raw(
              v41,
              0x1000u,
              0,
              "power voltage qualified! centi_voltage %d min_fb_vol %f qualified_vol %f",
              v38,
              v37,
              v18,
              v15);
            V_UNLOCK();
            LOWORD(v25) = 18180;
            HIWORD(v25) = (unsigned int)"capabilities_vbk" >> 16;
            zlog(*v4, v25, 143, "check_feedback_voltage", 22, 84, 60, v41);
            return 0;
          }
          V_LOCK();
          logfmt_raw(
            v41,
            0x1000u,
            0,
            "power voltage can not meet the target! centi_voltage %d min_fb_vol %f qualified_vol %f",
            v38,
            v37,
            v18,
            v15);
          V_UNLOCK();
          zlog(*v4, v17, 143, "check_feedback_voltage", 22, 80, 80, v41);
          --v39;
        }
        while ( v39 );
        V_LOCK();
        LOWORD(v30) = 18884;
        HIWORD(v30) = (unsigned int)"{\"command\":\"MINING_AUTH\",\"password\":{\"data\":\"%s\",\"type\":\"PASSWORD\"},\""
                                    "request_id\":{\"data\":%d,\"type\":\"REQUEST_ID\"},\"username\":{\"data\":\"%s\",\"t"
                                    "ype\":\"USERNAME\"}}" >> 16;
        logfmt_raw(v41, 0x1000u, 0, v30);
        V_UNLOCK();
        v31 = *v4;
        v32 = 261;
      }
      LOWORD(v33) = 18180;
      HIWORD(v33) = (unsigned int)"capabilities_vbk" >> 16;
      zlog(v31, v33, 143, "power_init", 10, v32, 100, v41);
      return -1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "power version error, expect %04x, actual %04x", (unsigned __int16)word_166342, v2);
      V_UNLOCK();
      LOWORD(v34) = 18180;
      HIWORD(v34) = (unsigned int)"capabilities_vbk" >> 16;
      zlog(*v4, v34, 143, "power_init", 10, 223, 100, v41);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v27) = 18348;
    HIWORD(v27) = (unsigned int)",\"nonce\":{\"data\":%u,\"type\":\"NONCE\"},\"extra_nonce\":{\"data\":%lld,\"type\":\"EXTRA_NONCE\"}}" >> 16;
    logfmt_raw(v41, 0x1000u, v1, v27, "power_init");
    V_UNLOCK();
    LOWORD(v28) = -14512;
    HIWORD(v28) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v29) = 18180;
    HIWORD(v29) = (unsigned int)"capabilities_vbk" >> 16;
    zlog(*v28, v29, 143, "power_init", 10, 214, 60, v41);
    return v1;
  }
}
