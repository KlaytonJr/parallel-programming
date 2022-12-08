# Programação Paralela com Open MP

# Execute
<ol>
    <li>Clona o projeto do github</li>
    <li>Certifique-se que você tenha o C e o processador GCC instalado na sua máquina</li>
    <li>No terminal faz o seguinte comando: <code>gcc -fopenmp -o file-name fileName.c</code></li>
    <li>Após compilar o código em C, roda o comando no terminal <code>./fileName.exe</code> ou <code>./fileName</code> para executar o programa</li>
</ol>

Na execução vai executar o paralelismo dependendo da quantidade de núcleos que seu processador tem.

Mas é possível modificar o número de threads que o OMP irá usar, da seguinte forma:
```
export OMP_NUM_THREADS=4
```
Com isso estou configurando um total de 4 threads

Pode configurar a quantidade de threads por uma chamada de função, com a seguir:
```
omp_set_num_threads(8);
```
A chamada de função tem prioridade comparado à variável de ambiente.

Qual a vantagem disso ?
Quando trabalhamos com muitas tarefas, se utilizarmos o método padrão (serial) dependendo da atividade pode demorar bastantes.
Já utilizando o método do paralelismo, várias atividades são feitas ao mesmo tempo, gerando uma melhora significativa no desempenho.

```
Para saber o valor da variável de ambiente (no terminal)
echo $OMP_NUM_THREADS
```

<code>gcc -fopenmp -o file-name fileName.c</code>
<code>gcc -o file-name fileName.c</code>