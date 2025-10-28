_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v2; // r4
  int v3; // r3

  switch ( a1 )
  {
    case 1:
      v2 = runtime_ctrl_vbk();
      break;
    case 2:
      v2 = runtime_ctrl_ckb();
      break;
    case 3:
      v2 = runtime_ctrl_ae_0();
      break;
    case 4:
      v2 = runtime_ctrl_grin32();
      break;
    case 5:
      v2 = runtime_ctrl_eth();
      break;
    case 6:
      v2 = runtime_ctrl_ltc();
      break;
    case 7:
      v2 = runtime_ctrl_dash();
      break;
    case 8:
      v2 = runtime_ctrl_ckb2();
      break;
    case 9:
      v2 = runtime_ctrl_dcr();
      break;
    case 10:
      v2 = runtime_ctrl_hns();
      break;
    case 11:
      v2 = runtime_ctrl_kda();
      break;
    default:
      v2 = runtime_ctrl_grin29();
      break;
  }
  if ( v2 )
  {
    pthread_mutex_lock(&stru_16A810);
    v3 = dword_16A828;
    v2[58] = a1;
    dword_16A828 = v3 + 1;
    *((_DWORD *)&stru_16A810 + v3 + 7) = v2;
    v2[34] = v3;
    pthread_mutex_unlock(&stru_16A810);
  }
  return v2;
}
