int __fastcall sub_1F8E14(int a1, int a2, unsigned int *a3, int *a4)
{
  int result; // r0

  switch ( *(_DWORD *)(a1 + 16 * a2) )
  {
    case 'S':
      *a3 = 3;
      *a4 = 1;
      result = 1;
      break;
    case '`':
      *a3 = 1;
      *a4 = 2;
      result = 2;
      break;
    case 'q':
      result = sub_267284(*(_DWORD *)(a1 + 16 * a2 - 16), *(_DWORD *)(a1 + 16 * a2 - 12));
      *a3 = 4;
      *a4 = result;
      break;
    case 'r':
      *a3 = 1;
      *a4 = 1;
      result = 1;
      break;
    default:
      result = sub_1C3118(a1, a2, a3, a4);
      break;
  }
  return result;
}
