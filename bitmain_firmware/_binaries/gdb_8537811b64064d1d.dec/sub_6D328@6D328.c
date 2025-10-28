void __fastcall sub_6D328(int a1, int a2)
{
  int v2; // r7
  unsigned __int8 *v3; // r4
  int v5; // r3
  int v7; // r11
  int v8; // r0
  int v9; // r4
  void *v10; // r0
  void *v11; // r10
  _DWORD *v12; // r0
  int v13; // r0
  void *v14; // r10
  _DWORD *v15; // r0
  int *v16; // r1
  int v17; // r0
  int v18; // r2
  int v19; // r2
  const char *v20; // r1
  void *v21; // r0
  int v22; // [sp+Ch] [bp-30h] BYREF
  int v23; // [sp+10h] [bp-2Ch] BYREF
  void *src; // [sp+14h] [bp-28h] BYREF
  unsigned __int8 *v25; // [sp+18h] [bp-24h] BYREF
  char v26[4]; // [sp+1Ch] [bp-20h] BYREF
  void *ptr; // [sp+20h] [bp-1Ch]
  unsigned __int8 *v28; // [sp+28h] [bp-14h]
  int v29; // [sp+2Ch] [bp-10h]
  int v30; // [sp+30h] [bp-Ch]
  int v31; // [sp+34h] [bp-8h]

  v2 = *(unsigned __int8 *)(a1 + 64);
  if ( *(_BYTE *)(a1 + 64) )
  {
    sub_94728(
      "stap-probe.c",
      1177,
      "%s: Assertion `%s' failed.",
      "void stap_probe::parse_arguments(gdbarch*)",
      "!m_have_parsed_args");
    v21 = src;
    if ( src )
LABEL_44:
      free(v21);
LABEL_45:
    sub_339024(v21);
  }
  v3 = *(unsigned __int8 **)(a1 + 68);
  *(_BYTE *)(a1 + 64) = 1;
  if ( v3 )
  {
    v5 = *v3;
    if ( v5 != 58 )
    {
      if ( *v3 )
      {
        if ( v5 == 45 )
          goto LABEL_26;
LABEL_7:
        if ( (unsigned int)(v5 - 48) <= 9 && v3[1] == 64 )
        {
          v19 = *v3;
          switch ( *v3 )
          {
            case '1':
              v22 = 1;
              v3 += 2;
              v7 = *(_DWORD *)(sub_1780DC(a2) + 104);
              goto LABEL_11;
            case '2':
              v22 = 3;
              v3 += 2;
              v7 = *(_DWORD *)(sub_1780DC(a2) + 112);
              goto LABEL_11;
            case '4':
              v22 = 5;
              v3 += 2;
              v7 = *(_DWORD *)(sub_1780DC(a2) + 120);
              goto LABEL_11;
            case '8':
              v22 = 7;
              v3 += 2;
              v7 = *(_DWORD *)(sub_1780DC(a2) + 128);
              goto LABEL_11;
            default:
              v20 = "`";
LABEL_37:
              sub_946D8("unrecognized bitness %s%c' for probe `%s'", v20, v19, *(const char **)(a1 + 4));
              return;
          }
        }
        while ( 1 )
        {
          v22 = v2;
          v7 = ((int (__fastcall *)(int))loc_166694)(a2) == 32
             ? *(_DWORD *)(sub_1780DC(a2) + 120)
             : *(_DWORD *)(sub_1780DC(a2) + 128);
LABEL_11:
          v23 = v7;
          v8 = sub_194460(2);
          v25 = v3;
          sub_1C3744(v26, 10, v8, a2);
          v28 = v3;
          v29 = v7;
          v30 = a2;
          v31 = v2;
          ((void (__fastcall *)(unsigned __int8 **, _DWORD))loc_6D180)(&v25, 0);
          if ( v31 )
            break;
          sub_1C37E4(v26, 52);
          sub_1C391C(v26, v7);
          sub_1C37E4(v26, 52);
          v9 = sub_93634(v25);
          v25 = (unsigned __int8 *)v9;
          sub_1C3784(&src, v26);
          v10 = ptr;
          if ( ptr )
            free(ptr);
          v11 = src;
          if ( dword_4748C0 )
          {
            v12 = (_DWORD *)sub_242FF0(v10);
            sub_1569D0(v11, *v12, "before conversion to prefix form");
            v11 = src;
          }
          v13 = sub_1C3EE8(v11);
          if ( dword_4748C0 )
          {
            v14 = src;
            v15 = (_DWORD *)sub_242FF0(v13);
            sub_15763C(v14, *v15);
          }
          v16 = *(int **)(a1 + 76);
          if ( v16 == *(int **)(a1 + 80) )
          {
            sub_6E1A0(a1 + 72, v16, &v22, &v23, &src);
          }
          else
          {
            if ( v16 )
            {
              v17 = v23;
              v18 = v22;
              v16[2] = (int)src;
              v16[1] = v17;
              *v16 = v18;
              src = (void *)v2;
            }
            *(_DWORD *)(a1 + 76) = v16 + 3;
          }
          v3 = (unsigned __int8 *)sub_93634(v9);
          if ( src )
            free(src);
          v5 = *v3;
          if ( !*v3 )
            return;
          if ( v5 != 45 )
            goto LABEL_7;
LABEL_26:
          v19 = v3[1];
          if ( (unsigned int)(v19 - 48) <= 9 && v3[2] == 64 )
          {
            switch ( v3[1] )
            {
              case '1':
                v22 = 2;
                v3 += 3;
                v7 = *(_DWORD *)(sub_1780DC(a2) + 100);
                goto LABEL_11;
              case '2':
                v22 = 4;
                v3 += 3;
                v7 = *(_DWORD *)(sub_1780DC(a2) + 108);
                goto LABEL_11;
              case '4':
                v22 = 6;
                v3 += 3;
                v7 = *(_DWORD *)(sub_1780DC(a2) + 116);
                goto LABEL_11;
              case '8':
                v22 = 8;
                v3 += 3;
                v7 = *(_DWORD *)(sub_1780DC(a2) + 124);
                goto LABEL_11;
              default:
                v20 = "`-";
                goto LABEL_37;
            }
          }
        }
        sub_94728(
          "stap-probe.c",
          1157,
          "%s: Assertion `%s' failed.",
          "expression_up stap_parse_argument(const char**, type*, gdbarch*)",
          "p.inside_paren_p == 0");
        v21 = ptr;
        if ( ptr )
          goto LABEL_44;
        goto LABEL_45;
      }
    }
  }
}
