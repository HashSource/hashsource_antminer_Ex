void __fastcall sub_9CEA4(int a1, int a2, _DWORD *a3)
{
  int v6; // r6
  const char *v7; // r1
  char *v8; // r4
  const char *v9; // r3
  _BYTE v10[20]; // [sp+4h] [bp-50h] BYREF
  int v11; // [sp+18h] [bp-3Ch]

  v6 = *(_DWORD *)sub_243004(a1);
  sub_266618(v10);
  if ( v11 )
  {
    sub_B76BC(4);
    sub_257658(v6, "addr", *(_DWORD *)(*(_DWORD *)(a2 + 28) + 44), *(_DWORD *)(*(_DWORD *)(a2 + 28) + 52));
  }
  sub_B76BC(5);
  *a3 = *(_DWORD *)(a2 + 28);
  switch ( a1 )
  {
    case 2:
      sub_257610(v6, "what", "failed Ada assertions");
      break;
    case 3:
      v9 = *(const char **)(a2 + 136);
      if ( v9 )
        sub_2576BC(v6, "what", "`%s' Ada exception handlers", v9);
      else
        sub_257610(v6, "what", "all Ada exceptions handlers");
      break;
    case 1:
      sub_257610(v6, "what", "unhandled Ada exceptions");
      break;
    default:
      v7 = *(const char **)(a2 + 136);
      if ( v7 )
      {
        v8 = sub_93168("`%s' Ada exception", v7);
        sub_257610(v6, "what", v8);
        if ( v8 )
          free(v8);
      }
      else
      {
        sub_257610(v6, "what", "all Ada exceptions");
      }
      break;
  }
}
