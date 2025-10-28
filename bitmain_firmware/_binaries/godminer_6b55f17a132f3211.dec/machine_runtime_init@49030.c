_DWORD *__fastcall machine_runtime_init(int a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r0
  _BYTE v8[4096]; // [sp+10h] [bp-1000h] BYREF

  switch ( a2 )
  {
    case 1:
      v4 = machine_runtime_ctrl_ckb_2042();
      v5 = v4;
      break;
    case 2:
      v4 = machine_runtime_ctrl_kda_2110();
      v5 = v4;
      break;
    case 3:
      v4 = machine_runtime_ctrl_hns_2130();
      v5 = v4;
      break;
    case 4:
      v4 = machine_runtime_ctrl_dcr_1727();
      v5 = v4;
      break;
    case 5:
      v4 = machine_runtime_ctrl_dash_1766();
      v5 = v4;
      break;
    case 6:
      v4 = machine_runtime_ctrl_eth_2280();
      v5 = v4;
      break;
    case 7:
      v4 = machine_runtime_ctrl_ltc_1489(a1);
      v5 = v4;
      break;
    case 8:
      v4 = (_DWORD *)machine_runtime_ctrl_zec_1746();
      v5 = v4;
      break;
    case 9:
      v4 = (_DWORD *)machine_runtime_ctrl_rvn_2020();
      v5 = v4;
      break;
    default:
      V_LOCK(a1);
      v3 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/machine_runtime/machine_runtime_interface.c",
        170,
        "machine_runtime_init",
        20,
        57,
        100,
        v8);
      MEMORY[0x3C] = 0;
      __und(0);
  }
  v5[15] = a2;
  V_LOCK(v4);
  v6 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_interface.c",
    170,
    "machine_runtime_init",
    20,
    61,
    40,
    v8);
  return v5;
}
