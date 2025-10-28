int __fastcall sub_1F3C40(int a1, int a2, _BYTE *a3, unsigned __int8 *a4)
{
  unsigned int v5; // r3
  char v10[8]; // [sp+24h] [bp-1808h] BYREF
  _BYTE v11[8]; // [sp+824h] [bp-1008h] BYREF
  unsigned __int8 v12; // [sp+1827h] [bp-5h]

  v12 = 0;
  sub_1F396C(a3, a1, a2, BYTE1(a1));
  do
  {
    sub_1F3BA8(HIBYTE(a1), (int)a3, BYTE1(a1) + 6, (int)a4, BYTE2(a1));
    if ( BYTE2(a1) == 2 )
    {
      if ( *a4 == (unsigned __int8)a1 && a4[1] == 1 )
      {
        snprintf(v10, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
          165,
          "pic_process_cmd",
          15,
          135,
          20,
          v11);
        return 1;
      }
      snprintf(v10, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        165,
        "pic_process_cmd",
        15,
        140,
        20,
        v11);
      sleep(1u);
    }
    else if ( BYTE2(a1) <= 2u )
    {
      snprintf(v10, 0x800u, "ret_len = %d should never happen!!", BYTE2(a1));
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        165,
        "pic_process_cmd",
        15,
        158,
        20,
        v11);
    }
    else
    {
      if ( __PAIR64__(a4[1], *a4) == __PAIR64__((unsigned __int8)a1, BYTE2(a1)) )
      {
        snprintf(v10, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
          165,
          "pic_process_cmd",
          15,
          148,
          20,
          v11);
        return 1;
      }
      snprintf(v10, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        165,
        "pic_process_cmd",
        15,
        153,
        20,
        v11);
      sleep(1u);
    }
    v5 = v12++;
  }
  while ( v5 <= 2 );
  return 0;
}
