_DWORD *__fastcall set_frontend_runtime_type(int a1)
{
  _DWORD *v2; // r4

  switch ( a1 )
  {
    case 0:
      v2 = frontend_runtime_grin29();
      goto LABEL_3;
    case 1:
      v2 = (_DWORD *)frontend_runtime_vbk();
      goto LABEL_3;
    case 2:
      v2 = frontend_runtime_ckb();
      goto LABEL_3;
    case 3:
      v2 = frontend_runtime_ae();
      goto LABEL_3;
    case 4:
      v2 = frontend_runtime_grin32();
      goto LABEL_3;
    case 5:
      v2 = frontend_runtime_eth();
      goto LABEL_3;
    case 6:
      v2 = (_DWORD *)frontend_runtime_ltc();
      goto LABEL_3;
    case 7:
      v2 = frontend_runtime_dash();
      goto LABEL_3;
    case 9:
      v2 = frontend_runtime_dcr();
      goto LABEL_3;
    case 10:
      v2 = frontend_runtime_hns();
      goto LABEL_3;
    case 11:
      v2 = (_DWORD *)frontend_runtime_kda();
LABEL_3:
      if ( v2 )
      {
        if ( dword_167204 )
          free((void *)dword_167204);
        *v2 = a1;
        dword_167204 = (int)v2;
      }
      break;
    default:
      v2 = 0;
      break;
  }
  return v2;
}
