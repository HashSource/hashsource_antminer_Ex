int __fastcall runtime_ctrl(int a1)
{
  int v2; // r4
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
      v2 = runtime_ctrl_ae();
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
    pthread_mutex_lock((pthread_mutex_t *)&unk_16A818);
    v3 = dword_16A830;
    *(_DWORD *)(v2 + 232) = a1;
    dword_16A830 = v3 + 1;
    *((_DWORD *)&unk_16A818 + v3 + 7) = v2;
    *(_DWORD *)(v2 + 136) = v3;
    pthread_mutex_unlock((pthread_mutex_t *)&unk_16A818);
  }
  return v2;
}
