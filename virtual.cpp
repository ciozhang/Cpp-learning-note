//基类 CCreature：
class CCreature {
protected :
int m_nLifeValue, m_nPower;
public:
virtual void Attack( CCreature * pCreature) {}
virtual void Hurted( int nPower) { }
virtual void FightBack( CCreature * pCreature) { }
};
//派生类 CDragon:
class CDragon : public CCreature {
public:
virtual void Attack( CCreature * pCreature);
virtual void Hurted( int nPower);
virtual void FightBack( CCreature * pCreature);
};

void CDragon::Attack(CCreature * p)
{
//…表现攻击动作的代码 
p->Hurted(m_nPower); //多态
p->FightBack(this); //多态
}
void CDragon::Hurted( int nPower)
{
//…表现受伤动作的代码
m_nLifeValue-= nPower;
}
void CDragon::FightBack(CCreature * p)
{
//…表现反击动作的代码 
p->Hurted(m_nPower/2); //多态
} 

class A {
 private:
 int a;
 public:
 virtual void Print( ) = 0 ; //纯虚函数
 void fun() { cout << “fun”; }
};