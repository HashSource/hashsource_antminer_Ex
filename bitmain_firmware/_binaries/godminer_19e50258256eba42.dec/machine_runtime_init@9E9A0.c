_DWORD *__fastcall machine_runtime_init(int a1, int a2)
{
  _BYTE v4[8]; // [sp+1Ch] [bp-1008h] BYREF
  _DWORD *v5; // [sp+101Ch] [bp-8h]

  v5 = 0;
  switch ( a2 )
  {
    case 1:
      v5 = machine_runtime_ctrl_ckb_2042();
      break;
    case 2:
      v5 = machine_runtime_ctrl_kda_2110();
      break;
    case 3:
      v5 = machine_runtime_ctrl_hns_2130();
      break;
    case 4:
      v5 = machine_runtime_ctrl_dcr_1727();
      break;
    case 5:
      v5 = machine_runtime_ctrl_dash_1766();
      break;
    case 6:
      v5 = machine_runtime_ctrl_eth_2280();
      break;
    case 7:
      v5 = machine_runtime_ctrl_eth_2282();
      break;
    case 8:
      v5 = machine_runtime_ctrl_ltc_1489();
      break;
    case 9:
      v5 = machine_runtime_ctrl_zec_1746();
      break;
    case 10:
      v5 = machine_runtime_ctrl_rvn_2044();
      break;
    case 11:
      v5 = machine_runtime_ctrl_kas_2380();
      break;
    case 12:
      v5 = machine_runtime_ctrl_ks5_2382();
      break;
    default:
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "not support miner type: %d", a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_interface.c",
        171,
        "machine_runtime_init",
        20,
        69,
        100,
        v4);
      break;
  }
  v5[18] = a2;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "miner type: %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_interface.c",
    171,
    "machine_runtime_init",
    20,
    73,
    40,
    v4);
  return v5;
}
