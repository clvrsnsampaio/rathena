// Copyright (c) rAthena Dev Teams - Licenciado sob GNU GPL
// Para mais informações, veja LICENÇA na pasta principal

#ifndef CONFIG_RENEWAL_HPP
#define CONFIG_RENEWAL_HPP

// Opção rápida para desabilitar todas as opções renewal, usado pelo ./configure
#define PRERE
#ifndef PRERE

/**
 * Arquivo de configuração rAthena (http://rathena.org)
 * Para orientações detalhadas sobre estas opções, verifique http://rathena.org/wiki/SRC/config/
 **/

/**
 * @INFO: Este arquivo contém configurações gerais de renewal; para configurações específicas de classes, verifique a pasta /src/config/classes
 **/

/// Modo de servidor Game Renewal
/// (desabilite comentando a linha)
///
/// Deixe esta linha para habilitar o suporte específico de renewal, como as fórmulas de renewal
#define RENEWAL

/// Tempo de conjuração (Cast time) Renewal
/// (desabilite comentando a linha)
///
/// Deixe esta linha para habilitar os algoritmos de tempo de conjuração renewal e habilitar bônus de cast fixo.
/// Veja também default_fixed_castrate em conf/battle/skill.conf para o tempo de cast fixo padrão (o padrão é 20%).
/// O tempo de cast é alterado por 2 partes: Tempo de Cast Variável (VCT) e Tempo de Cast Fixo (FCT).
/// Por padrão, o FCT é 20% do VCT (algumas habilidades não seguem isso).
/// - VCT é reduzido por DEX * 2 + INT.
/// - FCT NÃO é reduzido por atributos, apenas por equipamentos ou buffs.
/// Exemplo:
///  Em uma habilidade cujo tempo de cast é 10s, apenas 8s podem ser reduzidos; os outros 2s fazem parte do FCT.
#define RENEWAL_CAST

/// Algoritmos de taxa de drop Renewal
/// (desabilite comentando a linha)
///
/// Deixe esta linha para habilitar os algoritmos de taxa de drop de itens renewal.
/// Enquanto estiver habilitado, um modificador especial baseado na diferença entre o nível do jogador e do monstro é aplicado.
/// Baseado na tabela de http://irowiki.org/wiki/Drop_System#Level_Factor
#define RENEWAL_DROP

/// Algoritmos de taxa de EXP Renewal
/// (desabilite comentando a linha)
///
/// Deixe esta linha para habilitar os algoritmos de taxa de EXP de itens renewal.
/// Enquanto estiver habilitado, um modificador especial baseado na diferença entre o nível do jogador e do monstro é aplicado.
#define RENEWAL_EXP

/// Modificador de nível Renewal no dano
/// (desabilite comentando a linha)
///
// Deixe esta linha para habilitar o modificador de nível base renewal no dano de habilidades (apenas habilidades selecionadas)
#define RENEWAL_LVDMG

/// ASPD Renewal [malufett]
/// (desabilite comentando a linha)
///
/// Deixe esta linha para habilitar a ASPD renewal.
/// - Penalidade de escudo é aplicada.
/// - AGI tem um fator maior no aumento de ASPD.
/// - Há uma mudança em como habilidades/itens concedem ASPD.
/// - Alguns bônus de ASPD de habilidades/itens não serão acumulativos (stack).
#define RENEWAL_ASPD

/// Cálculos de atributos (stats) Renewal
/// (desabilite comentando a linha)
///
/// Deixe esta linha para habilitar o cálculo renewal para o aumento de pontos de status/parâmetros
#define RENEWAL_STAT

#endif

#endif /* CONFIG_RENEWAL_HPP */