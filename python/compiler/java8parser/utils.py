def __getSize__(ttype):
    '''
    input : {'base': int/boolean/byte/etc.,'dims':0/1/2.}
    output : memory reqd for ttype
    '''
    if(ttype.get('dims')>0):
        return 4
    elif(ttype.get('base') == 'boolean'):
        return 1
    elif(ttype.get('base') == 'byte'):
        return 1
    elif(ttype.get('base') == 'char'):
        return 1
    elif(ttype.get('base') == 'short'):
        return 2
    elif(ttype.get('base') == 'int'):
        return 4
    elif(ttype.get('base') == 'float'):
        return 4
    elif(ttype.get('base') == 'double'):
        return 8
    else:
        return 0