int __fastcall sub_B1AA0(int a1)
{
  int result; // r0
  int v2; // r0
  int v3; // r0
  unsigned int v4; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v6[4100]; // [sp+818h] [bp-1004h] BYREF

  v4 = 0;
  switch ( a1 )
  {
    case 0:
      fpga_read(496, &v4);
      result = HIWORD(v4) & 0x7FF;
      break;
    case 1:
      fpga_read(496, &v4);
      result = v4 & 0x7FF;
      break;
    case 2:
      fpga_read(500, &v4);
      result = HIWORD(v4) & 0x7FF;
      break;
    case 3:
      fpga_read(500, &v4);
      result = v4 & 0x7FF;
      break;
    case 4:
      fpga_read(504, &v4);
      result = HIWORD(v4) & 0x7FF;
      break;
    case 5:
      fpga_read(504, &v4);
      result = v4 & 0x7FF;
      break;
    case 6:
      fpga_read(508, &v4);
      result = HIWORD(v4) & 0x7FF;
      break;
    case 7:
      fpga_read(508, &v4);
      result = v4 & 0x7FF;
      break;
    case 8:
      fpga_read(512, &v4);
      result = HIWORD(v4) & 0x7FF;
      break;
    case 9:
      fpga_read(512, &v4);
      result = v4 & 0x7FF;
      break;
    default:
      v2 = snprintf(s, 0x800u, "%s: The uart%d is not supported!!!", "check_how_many_uart_data_in_fpga", a1);
      V_LOCK(v2);
      v3 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
        169,
        "check_how_many_uart_data_in_fpga",
        32,
        210,
        100,
        v6);
      result = 0;
      break;
  }
  return result;
}
