int __fastcall sub_202788(int a1, int a2, unsigned int a3)
{
  char v8[32]; // [sp+24h] [bp-1820h] BYREF
  _BYTE v9[32]; // [sp+824h] [bp-1020h] BYREF
  int v10; // [sp+1824h] [bp-20h] BYREF
  int v11; // [sp+1828h] [bp-1Ch] BYREF
  int v12; // [sp+182Ch] [bp-18h] BYREF
  unsigned int v13; // [sp+1830h] [bp-14h]
  unsigned int i; // [sp+1834h] [bp-10h]
  int v15; // [sp+1838h] [bp-Ch]
  unsigned int v16; // [sp+183Ch] [bp-8h]

  v12 = 0;
  v11 = 0;
  v16 = 0;
  v13 = 0;
  i = 0;
  v10 = 0;
  v15 = 0;
  if ( sub_2020F4(a1, &v12, &v11) )
  {
    snprintf(v8, 0x800u, "get_read_address_info error, chain_id = %d", a1);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "read_uart_data_in_fpga",
      22,
      419,
      100,
      v9);
    return 0;
  }
  else
  {
    v16 = a3 & 0x3FF | 0x80000000;
    fpga_write(v12, v16);
    v13 = a3 >> 2;
    for ( i = 0; i < v13; ++i )
    {
      fpga_read(v11, &v10);
      *(_BYTE *)(a2 + 4 * i) = HIBYTE(v10);
      *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v10);
      *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(v10);
      *(_BYTE *)(a2 + 4 * i + 3) = v10;
    }
    v15 = 4 * v13;
    v13 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      fpga_read(v11, &v10);
      switch ( v13 )
      {
        case 2u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v10);
          *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v10);
          v15 += 2;
          break;
        case 3u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v10);
          *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v10);
          *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(v10);
          v15 += 3;
          break;
        case 1u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v10);
          ++v15;
          break;
        default:
          snprintf(v8, 0x800u, "%s: the uart%d left data is 4*N length, error!!!", "read_uart_data_in_fpga", a1);
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
            178,
            "read_uart_data_in_fpga",
            22,
            465,
            100,
            v9);
          break;
      }
    }
    return v15;
  }
}
