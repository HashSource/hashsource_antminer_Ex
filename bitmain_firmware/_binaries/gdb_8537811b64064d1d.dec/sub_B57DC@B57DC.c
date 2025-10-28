int __fastcall sub_B57DC(int result, int *a2)
{
  int *v3; // r5
  int v4; // r3
  int v5; // r0

  v3 = (int *)result;
  v4 = *(_DWORD *)(*a2 + 24);
  if ( *(_BYTE *)v4 == 1 )
  {
    result = *(_DWORD *)(v4 + 20);
    if ( (unsigned int)**(unsigned __int8 **)(result + 24) - 3 <= 1 )
    {
      result = sub_A0CBC(result);
      if ( !result )
      {
        result = sub_A0D24(*(_DWORD *)(*(_DWORD *)(*a2 + 24) + 20));
        if ( !result )
          result = sub_B54CC(*v3, *a2, v3, a2);
      }
    }
  }
  if ( *v3 )
  {
    result = sub_A2CB0(*a2, 1);
    if ( result )
    {
      v5 = sub_A98E8(*v3);
      *v3 = v5;
      result = sub_26BC98(v5);
      *a2 = result;
    }
  }
  return result;
}
