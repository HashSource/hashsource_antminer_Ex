int __fastcall pic1704_update_app_program(char a1)
{
  int *v2; // r3
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  char v9[56]; // [sp+1Ch] [bp-1838h] BYREF
  _BYTE v10[56]; // [sp+81Ch] [bp-1038h] BYREF
  int v11; // [sp+181Ch] [bp-38h] BYREF
  int v12; // [sp+1820h] [bp-34h]
  int v13; // [sp+1824h] [bp-30h]
  int v14; // [sp+1828h] [bp-2Ch]
  char nptr[8]; // [sp+182Ch] [bp-28h] BYREF
  unsigned int v16; // [sp+1834h] [bp-20h]
  unsigned int v17; // [sp+1838h] [bp-1Ch]
  unsigned int v18; // [sp+183Ch] [bp-18h]
  void *s; // [sp+1840h] [bp-14h]
  FILE *stream; // [sp+1844h] [bp-10h]
  unsigned int i; // [sp+1848h] [bp-Ch]
  int v22; // [sp+184Ch] [bp-8h]

  i = 0;
  *(_DWORD *)nptr = 0;
  *(_DWORD *)&nptr[3] = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v17 = 3520;
  v16 = 880;
  v22 = 0;
  stream = fopen("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( stream )
  {
    s = malloc(0x3700u);
    if ( s )
    {
      fseek(stream, 0, 0);
      memset(s, 0, 0x3700u);
      for ( i = 0; i < v17; ++i )
      {
        fgets(nptr, 7, stream);
        v18 = strtoul(nptr, 0, 16);
        *((_BYTE *)s + 4 * i) = HIBYTE(v18);
        *((_BYTE *)s + 4 * i + 1) = BYTE2(v18);
        *((_BYTE *)s + 4 * i + 2) = BYTE1(v18);
        *((_BYTE *)s + 4 * i + 3) = v18;
      }
      fclose(stream);
      v22 = pic1704_reset(a1);
      if ( v22 )
      {
        v22 = pic1704_erase_program(a1);
        if ( v22 )
        {
          for ( i = 0; i < v16; ++i )
          {
            v2 = (int *)((char *)s + 16 * i);
            v3 = *v2;
            v4 = v2[1];
            v5 = v2[2];
            v6 = v2[3];
            v11 = v3;
            v12 = v4;
            v13 = v5;
            v14 = v6;
            v22 = sub_1F44F8(a1, (int)&v11);
            if ( !v22 )
            {
              snprintf(
                v9,
                0x800u,
                "%s send data to pic error chain[%d]!",
                "pic1704_update_app_program",
                (unsigned __int8)a1);
              V_LOCK();
              logfmt_raw(v10, 0x1000u, 0, v9);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
                165,
                "pic1704_update_app_program",
                26,
                375,
                20,
                v10);
              free(s);
              return 0;
            }
          }
          v22 = pic1704_reset(a1);
          if ( v22 )
          {
            free(s);
            return 1;
          }
          else
          {
            snprintf(
              v9,
              0x800u,
              "%s reset error after program chain[%d]!",
              "pic1704_update_app_program",
              (unsigned __int8)a1);
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, v9);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
              165,
              "pic1704_update_app_program",
              26,
              385,
              20,
              v10);
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, "Sweep error string = J%d:5.", (unsigned __int8)a1);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
              165,
              "pic1704_update_app_program",
              26,
              386,
              100,
              v10);
            free(s);
            return 0;
          }
        }
        else
        {
          snprintf(v9, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
          V_LOCK();
          logfmt_raw(v10, 0x1000u, 0, v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
            165,
            "pic1704_update_app_program",
            26,
            354,
            20,
            v10);
          free(s);
          return 0;
        }
      }
      else
      {
        snprintf(v9, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
          165,
          "pic1704_update_app_program",
          26,
          344,
          20,
          v10);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "Sweep error string = J%d:5.", (unsigned __int8)a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
          165,
          "pic1704_update_app_program",
          26,
          345,
          100,
          v10);
        free(s);
        return 0;
      }
    }
    else
    {
      snprintf(v9, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", (unsigned __int8)a1);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        165,
        "pic1704_update_app_program",
        26,
        318,
        20,
        v10);
      set_miner_6060info_malloc_failed_err(1);
      return -1;
    }
  }
  else
  {
    snprintf(
      v9,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      (unsigned __int8)a1);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_update_app_program",
      26,
      311,
      20,
      v10);
    return -1;
  }
}
