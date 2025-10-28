unsigned int __fastcall sub_B2C10(int a1, int a2, unsigned int a3)
{
  int v6; // r0
  unsigned int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v12; // r6
  int v13; // r0
  unsigned int v14; // r9
  int v15; // r4
  unsigned int v16; // r3
  int v17; // r4
  int v18; // r3
  unsigned int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r2
  unsigned int v22; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v24[4100]; // [sp+818h] [bp-1004h] BYREF

  v22 = 0;
  switch ( a1 )
  {
    case 0:
      v12 = 532;
      v13 = 528;
      goto LABEL_5;
    case 1:
      v12 = 540;
      v13 = 536;
      goto LABEL_5;
    case 2:
      v12 = 548;
      v13 = 544;
      goto LABEL_5;
    case 3:
      v12 = 556;
      v13 = 552;
      goto LABEL_5;
    case 4:
      v12 = 564;
      v13 = 560;
      goto LABEL_5;
    case 5:
      v12 = 572;
      v13 = 568;
      goto LABEL_5;
    case 6:
      v12 = 580;
      v13 = 576;
      goto LABEL_5;
    case 7:
      v12 = 588;
      v13 = 584;
      goto LABEL_5;
    case 8:
      v12 = 596;
      v13 = 592;
      goto LABEL_5;
    case 9:
      v12 = 604;
      v13 = 600;
LABEL_5:
      fpga_write(v13, a3 & 0x7FF | 0x80000000);
      v14 = a3 >> 2;
      if ( a3 >> 2 )
      {
        v15 = a2;
        do
        {
          v15 += 4;
          fpga_read(v12, &v22);
          v16 = v22;
          *(_BYTE *)(v15 - 1) = v22;
          *(_BYTE *)(v15 - 4) = HIBYTE(v16);
          *(_BYTE *)(v15 - 3) = BYTE2(v16);
          *(_BYTE *)(v15 - 2) = BYTE1(v16);
        }
        while ( a2 + 4 * v14 != v15 );
      }
      v17 = a3 & 3;
      v7 = a3 & 0xFFFFFFFC;
      if ( v17 )
      {
        fpga_read(v12, &v22);
        v18 = a2 + 4 * v14;
        if ( v17 == 2 )
        {
          v7 += 2;
          v21 = HIWORD(v22);
          *(_BYTE *)(a2 + 4 * v14) = HIBYTE(v22);
          *(_BYTE *)(v18 + 1) = v21;
        }
        else if ( v17 == 3 )
        {
          v7 += 3;
          v19 = HIWORD(v22);
          v20 = v22 >> 8;
          *(_BYTE *)(a2 + 4 * v14) = HIBYTE(v22);
          *(_BYTE *)(v18 + 1) = v19;
          *(_BYTE *)(v18 + 2) = v20;
        }
        else
        {
          ++v7;
          *(_BYTE *)(a2 + 4 * v14) = HIBYTE(v22);
        }
      }
      break;
    default:
      v6 = snprintf(s, 0x800u, "%s: The uart%d is not supported!!!", "get_read_address_info", a1);
      V_LOCK(v6);
      v7 = 0;
      v8 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
        169,
        "get_read_address_info",
        21,
        158,
        100,
        v24);
      v9 = snprintf(s, 0x800u, "get_read_address_info error, chain_id = %d", a1);
      V_LOCK(v9);
      v10 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
        169,
        "read_uart_data_in_fpga",
        22,
        222,
        100,
        v24);
      break;
  }
  return v7;
}
