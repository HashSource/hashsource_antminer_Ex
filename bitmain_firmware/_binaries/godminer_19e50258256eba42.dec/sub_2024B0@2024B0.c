int __fastcall sub_2024B0(unsigned __int8 a1)
{
  int v1; // r3
  char v3[8]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v4[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v5; // [sp+181Ch] [bp-8h] BYREF

  v5 = 0;
  switch ( a1 )
  {
    case 0u:
      fpga_read(496, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 1u:
      fpga_read(496, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 2u:
      fpga_read(500, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 3u:
      fpga_read(500, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 4u:
      fpga_read(504, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 5u:
      fpga_read(504, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 6u:
      fpga_read(508, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 7u:
      fpga_read(508, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 8u:
      fpga_read(512, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 9u:
      fpga_read(512, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 0xAu:
      fpga_read(516, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 0xBu:
      fpga_read(516, &v5);
      v1 = v5 & 0x3FF;
      break;
    case 0xCu:
      fpga_read(520, &v5);
      v1 = HIWORD(v5) & 0x3FF;
      break;
    case 0xDu:
      fpga_read(520, &v5);
      v1 = v5 & 0x3FF;
      break;
    default:
      snprintf(v3, 0x800u, "%s: The uart%d is not supported!!!", "check_how_many_uart_data_in_fpga", a1);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
        178,
        "check_how_many_uart_data_in_fpga",
        32,
        407,
        100,
        v4);
      v1 = 0;
      break;
  }
  return v1;
}
