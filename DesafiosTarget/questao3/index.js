import data from "./data.json" assert { type: "json" };

// Define um novo array contendo apenas os dias que houve faturamento.
let arrayDeFaturamentos = data.filter((e) => {
  if (e.valor == 0) {
    return false;
  }
  return true;
});

// Utiliza o forEach para encontrar o menor valor de faturamento, maior valor e os dias o total de faturamento do mês

let maiorFaturamento = 0;
let menorFaturamento;
let somaFaturamentos = 0;
arrayDeFaturamentos.forEach((e) => {
  if (e.valor > maiorFaturamento) {
    maiorFaturamento = e.valor;
  }
  if (!menorFaturamento) {
    menorFaturamento = e.valor;
  }
  if (menorFaturamento && e.valor < menorFaturamento) {
    menorFaturamento = e.valor;
  }
  somaFaturamentos += e.valor;
});

// Aqui fazemos utilização do total de faturamento para calculo da média
let media = somaFaturamentos / arrayDeFaturamentos.length;

// Encontra a quantidade de dias com o faturamento acima da média mensal.
let diasBons = 0;
arrayDeFaturamentos.forEach((e) => {
  if (e.valor > media) {
    diasBons++;
  }
});

document.getElementById("menor").innerHTML = "R$ " + menorFaturamento;
document.getElementById("maior").innerHTML = "R$ " + maiorFaturamento;
document.getElementById("diasBons").innerHTML = diasBons;
