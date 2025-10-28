int __fastcall i2c_read_eeprom_e11(int a1, _DWORD *a2, int a3, int a4, unsigned int a5, int a6)
{
  char v11[2048]; // [sp+24h] [bp-1810h] BYREF
  _BYTE v12[16]; // [sp+824h] [bp-1010h] BYREF
  void *ptr; // [sp+1824h] [bp-10h]
  unsigned int i; // [sp+1828h] [bp-Ch]
  unsigned int v15; // [sp+182Ch] [bp-8h]

  i = 0;
  if ( pthread_mutex_lock(&stru_C268F4[a6]) )
  {
    strcpy(v11, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_read_eeprom_e11",
      19,
      833,
      100,
      v12);
    return -1;
  }
  else
  {
    v15 = 0;
    ptr = 0;
    for ( i = 0; i < a5; i += 1 + a3 )
    {
      v15 = ((*a2 + i) << 8) | 0xA3000000;
      if ( !sub_221098(a6) )
      {
        strcpy(v11, "iic not ready 4 read1");
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_read_eeprom_e11",
          19,
          856,
          100,
          v12);
        free(ptr);
        pthread_mutex_unlock(&stru_C268F4[a6]);
        return -2;
      }
      if ( a6 == 4 )
      {
        fpga_write(48, v15);
      }
      else if ( a6 )
      {
        if ( a6 == 1 )
        {
          fpga_write(1348, v15);
        }
        else if ( a6 == 2 )
        {
          fpga_write(1352, v15);
        }
        else
        {
          fpga_write(1336, v15);
        }
      }
      else
      {
        fpga_write(1344, v15);
      }
      if ( !sub_2214A4((_BYTE *)(a4 + i), a6) )
      {
        strcpy(v11, "iic failed to read data");
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_read_eeprom_e11",
          19,
          878,
          100,
          v12);
        free(ptr);
        pthread_mutex_unlock(&stru_C268F4[a6]);
        return -3;
      }
      usleep(0x1388u);
    }
    free(ptr);
    pthread_mutex_unlock(&stru_C268F4[a6]);
    return a5;
  }
}
